#ifndef VAST_BITMAP_INDEX_H
#define VAST_BITMAP_INDEX_H

#include "vast/operator.h"
#include "vast/option.h"

namespace vast {

class bitstream;

/// The abstract base class for bitmap indexes.
class bitmap_index
{
public:
  /// Destroys a bitmap index.
  virtual ~bitmap_index() = default;

  /// Appends a single value.
  /// @param val The value to add to the index.
  /// @return `true` if appending succeeded.
  bool push_back(value const& val);

  /// Appends fill material (i.e., invalid bits).
  /// @param n The number of elements to append.
  /// @return `true` on success.
  virtual bool patch(size_t n) = 0;

  /// Looks up a value with a given relational operator.
  /// @param op The relation operator.
  /// @param val The value to lookup.
  virtual option<bitstream>
  lookup(relational_operator op, value const& val) const = 0;

  /// Creates a string representation of the bitmap index.
  /// @return An `std::string` of the bitmap index.
  virtual std::string to_string() const = 0;

private:
  virtual bool push_back_impl(value const& val) = 0;
};

} // namespace vast

#endif