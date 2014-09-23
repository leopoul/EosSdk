// Copyright (c) 2014 Arista Networks, Inc.  All rights reserved.
// Arista Networks, Inc. Confidential and Proprietary.

#ifndef EOS_TYPES_ETH_PHY_INTF_H
#define EOS_TYPES_ETH_PHY_INTF_H


namespace eos {

/** Possible interface link speeds. */
enum eth_link_speed_t {
   LINK_SPEED_UNKNOWN,
   LINK_SPEED_10MBPS,
   LINK_SPEED_100MBPS,
   LINK_SPEED_1GBPS,
   LINK_SPEED_10GBPS,
   LINK_SPEED_40GBPS,
   LINK_SPEED_100GBPS,
};

}

#endif // EOS_TYPES_ETH_PHY_INTF_H
