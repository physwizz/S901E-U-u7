/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 */

#ifndef _SOC_QCOM_LLCC_EVENTS_H_
#define _SOC_QCOM_LLCC_EVENTS_H_

enum event_port_select {
	EVENT_PORT_FEAC,
	EVENT_PORT_FERC,
	EVENT_PORT_FEWC,
	EVENT_PORT_BEAC,
	EVENT_PORT_BERC,
	EVENT_PORT_TRP,
	EVENT_PORT_DRP,
	EVENT_PORT_PMGR,
	EVENT_PORT_BEAC1,
	EVENT_PORT_TENURE,
	EVENT_PORT_TLAT,
};

enum feac_events {
	FEAC_ANY_ACCESS,
	FEAC_READ_INCR,
	FEAC_WRITE_INCR,
	FEAC_WRITE_ORDERED,
	FEAC_READE_EXCL,
	FEAC_WRITE_EXCL,
	FEAC_CMO,
	FEAC_CMO_CLEAN,
	FEAC_CMO_INVAL,
	FEAC_CMO_CLEANINVAL,
	FEAC_CMO_DCPLD,
	FEAC_READ_NOALLOC,
	FEAC_WRITE_NOALLOC,
	FEAC_PREFETCH,
	FEAC_RD_BYTES,
	FEAC_RD_BEATS,
	FEAC_WR_BYTES,
	FEAC_WR_BEATS,
	FEAC_FC_READ,
	FEAC_EWD_ACCESS,
	FEAC_TCM_ACCESS,
	FEAC_GM_HIT,
	FEAC_GM_MISS,
	FEAC_GM_UNAVAILABLE,
	FEAC_XPU_ERROR,
	FEAC_READ_HAZARD,
	FEAC_WRITE_HAZARD,
	FEAC_GRANULE_READ,
	FEAC_GRANULE_WRITE,
	FEAC_RIFB_ALLOC,
	FEAC_WIFB_ALLOC,
	FEAC_RIFB_DEALLOC,
	FEAC_WIFB_DEALLOC,
	FEAC_RESERVED,
	FEAC_RESERVED1,
	FEAC_FEAC2TRP_LP_TX,
	FEAC_TRP_LP_BUSY,
	FEAC_FEAC2TRP_HP_TX,
	FEAC_TRP_HP_BUSY,
	FEAC_FEAC2FEWC_TX,
	FEAC_BEAC_LP_BUSY,
	FEAC_BEAC_HP_BUSY,
	FEAC_RIFB_FULL,
	FEAC_WIFB_FULL,
	FEAC_RD_CRDT_TX,
	FEAC_WR_CRDT_TX,
	FEAC_PROMOTION,
	FEAC_FEAC2TRP_LP_PRESSURE,
	FEAC_FEAC2TRP_HP_PRESSURE,
	FEAC_FEAC2FEWC_PRESSURE,
	FEAC_FEAC2BEAC_LP_PRESSURE,
	FEAC_FEAC2BEAC_HP_PRESSURE,
	FEAC_WR_THROUGH,
};

enum ferc_events {
	FERC_BERC_CMD,
	FERC_BERC_BEAT,
	FERC_DRP_CMD,
	FERC_DRP_BEAT,
	FERC_RD_CTRL_RSP_TX,
	FERC_WR_CTRL_RSP_TX,
	FERC_RD_DATA_TX,
	FERC_MISS_TRUMPS_HIT,
	FERC_HIT_TRUMPS_WRSP,
	FERC_RD_INTRA_RSP_IDLE,
};

enum fewc_events {
	FEWC_WR_CMD,
	FEWC_WR_DATA_BEAT,
	FEWC_WR_LAST,
	FEWC_WBUF_DEALLOC,
	FEWC_WR_HIT,
	FEWC_WR_MISS,
	FEWC_NC_RMW,
	FEWC_WR_DOWNGRADE,
	FEWC_BEAC_WR_CMD,
	FEWC_BEAC_WR_BEAT,
	FEWC_BEAC_RD_CMD,
	FEWC_BERC_FILL_BEAT,
	FEWC_DRP_WR_CMD,
	FEWC_DRP_WR_BEAT,
	FEWC_DRP_RD_BEAT,
	FEWC_TRP_TAG_LOOKUP,
	FEWC_TRP_TAG_UPDATE,
	FEWC_TRP_UNSTALL,
	FEWC_WBUFFS_FULL,
	FEWC_DRP_BUSY,
	FEWC_BEAC_WR_BUSY,
	FEWC_BEAC_RD_BUSY,
	FEWC_TRP_TAG_LOOKUP_BUSY,
	FEWC_TRP_TAG_UPDATE_BUSY,
	FEWC_C_RMW,
	FEWC_NC_ALLOC_RMW,
	FEWC_NC_NO_ALLOC_RMW,
	FEWC_NC_RMW_DEALLOC,
	FEWC_C_RMW_DEALLOC,
	FEWC_STALLED_BY_EVICT,
};

enum beac_events {
	BEAC_RD_TX,
	BEAC_WR_TX,
	BEAC_RD_GRANULE,
	BEAC_WR_GRANULE,
	BEAC_WR_BEAT_TX,
	BEAC_RD_CRDT_ZERO,
	BEAC_WR_CRDT_ZERO,
	BEAC_WDATA_CRDT_ZERO,
	BEAC_IFCMD_CRDT_ZERO,
	BEAC_IFWDATA_CRDT_ZERO,
	BEAC_PCT_ENTRY_ALLOC,
	BEAC_PCT_ENTRY_FREE,
	BEAC_PCT_FULL,
	BEAC_RD_PROMOTION_TX,
	BEAC_WR_PROMOTION_TX,
	BEAC_RD_PRESSURE_TX,
	BEAC_WR_PRESSURE_TX,
};

enum berc_events {
	BERC_RD_CMD,
	BERC_ERROR_CMD,
	BERC_PCT_ENTRY_DEALLOC,
	BERC_RD_RSP_RX,
	BERC_RD_RSP_BEAT_RX,
	BERC_RD_LA_RX,
	BERC_UNSTALL_RX,
	BERC_TX_RD_CMD,
	BERC_TX_ERR_CMD,
	BERC_TX_RD_BEAT,
	BERC_TX_ERR_BEAT,
	BERC_RESERVED,
	BERC_RESERVED1,
	BERC_CMO_RX,
	BERC_CMO_TX,
	BERC_DRP_WR_TX,
	BERC_DRP_WR_BEAT_TX,
	BERC_FEWC_WR_TX,
	BERC_FEWC_WR_BEAT_TX,
	BERC_LBUFFS_FULL,
	BERC_DRP_BUSY,
	BERC_FEWC_BUSY,
	BERC_LBUFF_STALLED,
};

enum trp_events {
	TRP_ANY_ACCESS,
	TRP_INCR_RD,
	TRP_INCR_WR,
	TRP_ANY_HIT,
	TRP_RD_HIT,
	TRP_WR_HIT,
	TRP_RD_MISS,
	TRP_WR_MISS,
	TRP_RD_HIT_MISS,
	TRP_WR_HIT_MISS,
	TRP_EVICT,
	TRP_GRANULE_EVICT,
	TRP_RD_EVICT,
	TRP_WR_EVICT,
	TRP_LINE_FILL,
	TRP_GRANULE_FILL,
	TRP_WSC_WRITE,
	TRP_WSC_EVICT,
	TRP_SUBCACHE_ACT,
	TRP_SUBCACHE_DEACT,
	TRP_RD_DEACTIVE_SUBCACHE,
	TRP_WR_DEACTIVE_SUBCACHE,
	TRP_INVALID_LINE_ALLOC,
	TRP_DEACTIVE_LINE_ALLOC,
	TRP_SELF_EVICTION_ALLOC,
	TRP_UC_SUBCACHE_ALLOC,
	TRP_FC_SELF_EVICTION_ALLOC,
	TRP_LP_SUBCACHE_VICTIM,
	TRP_OC_SUBCACHE_VICTIM,
	TRP_MRU_ROLLOVER,
	TRP_NC_DOWNGRADE,
	TRP_TAGRAM_CORR_ERR,
	TRP_TAGRAM_UNCORR_ERR,
	TRP_RD_MISS_FC,
	TRP_CPU_WRITE_EWD_LINE,
	TRP_CLIENT_WRITE_EWD_LINE,
	TRP_CLIENT_READ_EWD_LINE,
	TRP_CMO_I_EWD_LINE,
	TRP_CMO_I_DIRTY_LINE,
	TRP_DRP_RD_NOTIFICATION,
	TRP_DRP_WR_NOTIFICATION,
	TRP_LINEFILL_TAG_UPDATE,
	TRP_FEWC_TAG_UPDATE,
	TRP_ET_FULL,
	TRP_NAWT_FULL,
	TRP_HITQ_FULL,
	TRP_ET_ALLOC,
	TRP_ET_DEALLOC,
	TRP_NAWT_ALLOC,
	TRP_NAWT_DEALLOC,
	TRP_RD_REPLAY,
	TRP_WR_ECC_RD,
	TRP_ET_LP_FULL,
	TRP_ET_HP_FULL,
	TRP_SOEH,
};

enum drp_events {
	DRP_TRP_RD_NOTIFICATION,
	DRP_TRP_WR_NOTIFICATION,
	DRP_BIST_WR_NOTIFICATION,
	DRP_DRIE_WR_NOTIFICATION,
	DRP_ECC_CORR_ERR,
	DRP_ECC_UNCORR_ERR,
	DRP_FERC_RD_TX,
	DRP_FEWC_RD_TX,
	DRP_EVICT_LINE_TX,
	DRP_EVICT_GRANULE_TX,
	DRP_BIST_TX,
	DRP_FERC_RD_BEAT,
	DRP_FEWC_RD_BEAT,
	DRP_BIST_RD_BEAT,
	DRP_EVICT_RD_BEAT,
	DRP_BERC_WR_BEAT,
	DRP_FEWC_WR_BEAT,
	DRP_BIST_WR_BEAT,
	DRP_DRIE_WR_BEAT,
	DRP_BERC_UNSTALL,
	DRP_FEWC_UNSTALL,
	DRP_LB_RD,
	DRP_LB_WR,
	DRP_BANK_CONFLICT,
	DRP_FILL_TRUMPS_RD,
	DRP_RD_TRUMPS_WR,
	DRP_LB_SLP_RET,
	DRP_LB_SLP_NRET,
	DRP_LB_WAKEUP,
	DRP_TRP_EARLY_WAKEUP,
	DRP_PCB_IDLE,
	DRP_EVICT_RDFIFO_FULL,
	DRP_FEWC_RDFIFO_FULL,
	DRP_FERC_RDFIFO_FULL,
	DRP_FERC_RD,
	DRP_FEWC_RD,
	DRP_LINE_EVICT,
	DRP_GRANULE_EVICT,
	DRP_BIST_RD,
	DRP_FEWC_WR,
	DRP_LINE_FILL,
	DRP_GRANULE_FILL,
	DRP_BIST_WR,
	DRP_DRIE_WR,
};

enum pmgr_events {
	PMGR_Q_RUN_STATE,
	PMGR_Q_DENIED_STATE,
	PMGR_Q_STOPEED_TO_Q_RUN,
	PMGR_Q_RUN_TO_Q_FENCED,
	PMGR_Q_RUN_TO_Q_DENIED,
	PMGR_Q_DENIED_TO_Q_RUN,
	PMGR_Q_FENCED_TO_Q_STOPPED,
	PMGR_Q_FENCED_TO_Q_DENIED,
};

enum filter_type {
	UNKNOWN_FILTER,
	SCID,
	MID,
	PROFILING_TAG,
	WAY_ID,
	OPCODE,
	CACHEALLOC,
	MEMTAGOPS,
	MULTISCID,
	DIRTYINFO,
	ADDR_MASK
};

#endif /* _SOC_QCOM_LLCC_EVENTS_H_ */