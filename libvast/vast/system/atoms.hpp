#ifndef VAST_SYSTEM_ATOMS_HPP
#define VAST_SYSTEM_ATOMS_HPP

#include <caf/atom.hpp>

namespace vast {
namespace system {

// Inherited from CAF
using caf::add_atom;
using caf::connect_atom;
using caf::delete_atom;
using caf::flush_atom;
using caf::get_atom;
using caf::ok_atom;
using caf::put_atom;
using caf::join_atom;
using caf::leave_atom;
using caf::spawn_atom;
using caf::subscribe_atom;

// Generic
using accept_atom = caf::atom_constant<caf::atom("accept")>;
using announce_atom = caf::atom_constant<caf::atom("announce")>;
using batch_atom = caf::atom_constant<caf::atom("batch")>;
using continuous_atom = caf::atom_constant<caf::atom("continuous")>;
using cpu_atom = caf::atom_constant<caf::atom("cpu")>;
using data_atom = caf::atom_constant<caf::atom("data")>;
using disable_atom = caf::atom_constant<caf::atom("disable")>;
using disconnect_atom = caf::atom_constant<caf::atom("disconnect")>;
using done_atom = caf::atom_constant<caf::atom("done")>;
using election_atom = caf::atom_constant<caf::atom("election")>;
using empty_atom = caf::atom_constant<caf::atom("empty")>;
using enable_atom = caf::atom_constant<caf::atom("enable")>;
using exists_atom = caf::atom_constant<caf::atom("exists")>;
using extract_atom = caf::atom_constant<caf::atom("extract")>;
using heartbeat_atom = caf::atom_constant<caf::atom("heartbeat")>;
using heap_atom = caf::atom_constant<caf::atom("heap")>;
using historical_atom = caf::atom_constant<caf::atom("historical")>;
using id_atom = caf::atom_constant<caf::atom("id")>;
using key_atom = caf::atom_constant<caf::atom("key")>;
using limit_atom = caf::atom_constant<caf::atom("limit")>;
using link_atom = caf::atom_constant<caf::atom("link")>;
using list_atom = caf::atom_constant<caf::atom("list")>;
using load_atom = caf::atom_constant<caf::atom("load")>;
using peer_atom = caf::atom_constant<caf::atom("peer")>;
using persist_atom = caf::atom_constant<caf::atom("persist")>;
using ping_atom = caf::atom_constant<caf::atom("ping")>;
using pong_atom = caf::atom_constant<caf::atom("pong")>;
using progress_atom = caf::atom_constant<caf::atom("progress")>;
using prompt_atom = caf::atom_constant<caf::atom("prompt")>;
using publish_atom = caf::atom_constant<caf::atom("publish")>;
using query_atom = caf::atom_constant<caf::atom("query")>;
using read_atom = caf::atom_constant<caf::atom("read")>;
using replicate_atom = caf::atom_constant<caf::atom("replicate")>;
using request_atom = caf::atom_constant<caf::atom("request")>;
using response_atom = caf::atom_constant<caf::atom("response")>;
using run_atom = caf::atom_constant<caf::atom("run")>;
using schema_atom = caf::atom_constant<caf::atom("schema")>;
using seed_atom = caf::atom_constant<caf::atom("seed")>;
using set_atom = caf::atom_constant<caf::atom("set")>;
using shutdown_atom = caf::atom_constant<caf::atom("shutdown")>;
using signal_atom = caf::atom_constant<caf::atom("signal")>;
using snapshot_atom = caf::atom_constant<caf::atom("snapshot")>;
using start_atom = caf::atom_constant<caf::atom("start")>;
using state_atom = caf::atom_constant<caf::atom("state")>;
using statistics_atom = caf::atom_constant<caf::atom("statistics")>;
using stop_atom = caf::atom_constant<caf::atom("stop")>;
using store_atom = caf::atom_constant<caf::atom("store")>;
using submit_atom = caf::atom_constant<caf::atom("submit")>;
using unload_atom = caf::atom_constant<caf::atom("unload")>;
using value_atom = caf::atom_constant<caf::atom("value")>;
using write_atom = caf::atom_constant<caf::atom("write")>;

// Actor roles
using accountant_atom = caf::atom_constant<caf::atom("accountant")>;
using candidate_atom = caf::atom_constant<caf::atom("candidate")>;
using consensus_atom = caf::atom_constant<caf::atom("consensus")>;
using identifier_atom = caf::atom_constant<caf::atom("identifier")>;
using index_atom = caf::atom_constant<caf::atom("index")>;
using follower_atom = caf::atom_constant<caf::atom("follower")>;
using leader_atom = caf::atom_constant<caf::atom("leader")>;
using receiver_atom = caf::atom_constant<caf::atom("receiver")>;
using sink_atom = caf::atom_constant<caf::atom("sink")>;
using source_atom = caf::atom_constant<caf::atom("source")>;
using subscriber_atom = caf::atom_constant<caf::atom("subscriber")>;
using supervisor_atom = caf::atom_constant<caf::atom("supervisor")>;
using search_atom = caf::atom_constant<caf::atom("search")>;
using tracker_atom = caf::atom_constant<caf::atom("tracker")>;

} // namespace system
} // namespace vast

#endif
