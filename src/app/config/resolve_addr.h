/* Copyright (c) 2020, The Tor Project, Inc. */
/* See LICENSE for licensing information */

/**
 * \file resolve_addr.h
 * \brief Header file for resolve_addr.c.
 **/

#ifndef TOR_CONFIG_RESOLVE_ADDR_H
#define TOR_CONFIG_RESOLVE_ADDR_H

#include "app/config/or_options_st.h"

int resolve_my_address_v4(int warn_severity, const or_options_t *options,
                          uint32_t *addr_out,
                          const char **method_out, char **hostname_out);

bool find_my_address(const or_options_t *options, int family,
                     int warn_severity, tor_addr_t *addr_out,
                     const char **method_out, char **hostname_out);

void resolved_addr_get_last(int family, tor_addr_t *addr_out);
void resolved_addr_reset_last(int family);

MOCK_DECL(bool, resolved_addr_is_local, (const tor_addr_t *addr));

#ifdef RESOLVE_ADDR_PRIVATE

#endif /* RESOLVE_ADDR_PRIVATE */

#endif /* TOR_CONFIG_RESOLVE_ADDR_H */

