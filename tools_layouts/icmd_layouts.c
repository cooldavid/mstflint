/*
 * Copyright (C) Jan 2013 Mellanox Technologies Ltd. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "icmd_layouts.h"


void connectib_FW_VERSION_pack(const struct connectib_FW_VERSION *ptr_struct, u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MAJOR);

    offset = 48;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->SUBMINOR);

    offset = 32;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MINOR);

    offset = 80;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Hour);

    offset = 72;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Minutes);

    offset = 64;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Seconds);

    offset = 120;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Day);

    offset = 112;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Month);

    offset = 96;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->Year);

}

void connectib_FW_VERSION_unpack(struct connectib_FW_VERSION *ptr_struct, const u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 0;
    ptr_struct->MAJOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

    offset = 48;
    ptr_struct->SUBMINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

    offset = 32;
    ptr_struct->MINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

    offset = 80;
    ptr_struct->Hour = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 72;
    ptr_struct->Minutes = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 64;
    ptr_struct->Seconds = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 120;
    ptr_struct->Day = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 112;
    ptr_struct->Month = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 96;
    ptr_struct->Year = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

}

void connectib_FW_VERSION_print(const struct connectib_FW_VERSION *ptr_struct, FILE* file, int indent_level)
{
    adb2c_add_indentation(file, indent_level);
    fprintf(file, "======== connectib_FW_VERSION ========\n");
    int i = 0;
    (void)i;
    (void)ptr_struct;
    (void)file;
    (void)indent_level;

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "MAJOR                : " UH_FMT "\n", ptr_struct->MAJOR);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "SUBMINOR             : " UH_FMT "\n", ptr_struct->SUBMINOR);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "MINOR                : " UH_FMT "\n", ptr_struct->MINOR);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Hour                 : " UH_FMT "\n", ptr_struct->Hour);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Minutes              : " UH_FMT "\n", ptr_struct->Minutes);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Seconds              : " UH_FMT "\n", ptr_struct->Seconds);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Day                  : " UH_FMT "\n", ptr_struct->Day);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Month                : " UH_FMT "\n", ptr_struct->Month);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "Year                 : " UH_FMT "\n", ptr_struct->Year);

}

int connectib_FW_VERSION_size(void)
{
     return 16;
}

void connectib_FW_VERSION_dump(const struct connectib_FW_VERSION *ptr_struct, FILE* file)
{
    connectib_FW_VERSION_print(ptr_struct, file, 0);
}


void connectib_icmd_get_fw_info_pack(const struct connectib_icmd_get_fw_info *ptr_struct, u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 0;
    connectib_FW_VERSION_pack(&(ptr_struct->fw_version), ptr_buff + offset/8);

    offset = 144;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->hash_signature);

    for (i = 0; i < 16; i++) {
    offset = adb2c_calc_array_field_address(184, 8, i, 288, 1);
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->psid[i]);
    }

}

void connectib_icmd_get_fw_info_unpack(struct connectib_icmd_get_fw_info *ptr_struct, const u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 0;
    connectib_FW_VERSION_unpack(&(ptr_struct->fw_version), ptr_buff + offset/8);

    offset = 144;
    ptr_struct->hash_signature = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

    for (i = 0; i < 16; i++) {
    offset = adb2c_calc_array_field_address(184, 8, i, 288, 1);
    ptr_struct->psid[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }

    ptr_struct->psid[16] = '\0';
}

void connectib_icmd_get_fw_info_print(const struct connectib_icmd_get_fw_info *ptr_struct, FILE* file, int indent_level)
{
    adb2c_add_indentation(file, indent_level);
    fprintf(file, "======== connectib_icmd_get_fw_info ========\n");
    int i = 0;
    (void)i;
    (void)ptr_struct;
    (void)file;
    (void)indent_level;

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fw_version:\n");
    connectib_FW_VERSION_print(&(ptr_struct->fw_version), file, indent_level + 1);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "hash_signature       : " UH_FMT "\n", ptr_struct->hash_signature);

    fprintf(file, "psid                 : \"%s\"\n", ptr_struct->psid);
}

int connectib_icmd_get_fw_info_size(void)
{
     return 36;
}

void connectib_icmd_get_fw_info_dump(const struct connectib_icmd_get_fw_info *ptr_struct, FILE* file)
{
    connectib_icmd_get_fw_info_print(ptr_struct, file, 0);
}


void connectx4_icmd_mh_sync_pack(const struct connectx4_icmd_mh_sync *ptr_struct, u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 28;
    adb2c_push_bits_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->input_state);

    offset = 16;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->input_sync_type);

    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->input_ignore_inactive_hosts);

    offset = 60;
    adb2c_push_bits_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->fsm_state);

    offset = 48;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->fsm_sync_type);

    offset = 32;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->fsm_ignore_inactive_hosts);

    offset = 92;
    adb2c_push_bits_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->fsm_host_ready);

    offset = 96;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->fsm_start_uptime);

}

void connectx4_icmd_mh_sync_unpack(struct connectx4_icmd_mh_sync *ptr_struct, const u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 28;
    ptr_struct->input_state = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 4);

    offset = 16;
    ptr_struct->input_sync_type = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 0;
    ptr_struct->input_ignore_inactive_hosts = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 60;
    ptr_struct->fsm_state = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 4);

    offset = 48;
    ptr_struct->fsm_sync_type = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

    offset = 32;
    ptr_struct->fsm_ignore_inactive_hosts = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 92;
    ptr_struct->fsm_host_ready = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 4);

    offset = 96;
    ptr_struct->fsm_start_uptime = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

}

void connectx4_icmd_mh_sync_print(const struct connectx4_icmd_mh_sync *ptr_struct, FILE* file, int indent_level)
{
    adb2c_add_indentation(file, indent_level);
    fprintf(file, "======== connectx4_icmd_mh_sync ========\n");
    int i = 0;
    (void)i;
    (void)ptr_struct;
    (void)file;
    (void)indent_level;

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "input_state          : " UH_FMT "\n", ptr_struct->input_state);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "input_sync_type      : " UH_FMT "\n", ptr_struct->input_sync_type);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "input_ignore_inactive_hosts : " UH_FMT "\n", ptr_struct->input_ignore_inactive_hosts);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fsm_state            : " UH_FMT "\n", ptr_struct->fsm_state);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fsm_sync_type        : " UH_FMT "\n", ptr_struct->fsm_sync_type);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fsm_ignore_inactive_hosts : " UH_FMT "\n", ptr_struct->fsm_ignore_inactive_hosts);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fsm_host_ready       : " UH_FMT "\n", ptr_struct->fsm_host_ready);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fsm_start_uptime     : " U32H_FMT "\n", ptr_struct->fsm_start_uptime);

}

int connectx4_icmd_mh_sync_size(void)
{
     return 16;
}

void connectx4_icmd_mh_sync_dump(const struct connectx4_icmd_mh_sync *ptr_struct, FILE* file)
{
    connectx4_icmd_mh_sync_print(ptr_struct, file, 0);
}

void connectx4_icmd_query_cap_general_pack(const struct connectx4_icmd_query_cap_general *ptr_struct, u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 5;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->fw_ctrl_update_icmd);

    offset = 4;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->kdnet_ctrl);

    offset = 3;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->mh_sync);

    offset = 2;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->allow_icmd_access_reg_on_all_registers);

    offset = 1;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->fw_info_psid);

    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->nv_access);

    offset = 63;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_p);

    offset = 62;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_u);

    offset = 61;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_m);

    offset = 60;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_b);

    offset = 59;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_a);

    offset = 58;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_g);

    offset = 57;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->wol_s);

    offset = 55;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->rol_g);

    offset = 54;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->rol_s);

    offset = 53;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->fpga);

}

void connectx4_icmd_query_cap_general_unpack(struct connectx4_icmd_query_cap_general *ptr_struct, const u_int8_t* ptr_buff)
{
    u_int32_t offset;
    int i = 0;
    (void)offset;
    (void)i;
    (void)ptr_struct;
    (void)ptr_buff;

    offset = 5;
    ptr_struct->fw_ctrl_update_icmd = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 4;
    ptr_struct->kdnet_ctrl = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 3;
    ptr_struct->mh_sync = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 2;
    ptr_struct->allow_icmd_access_reg_on_all_registers = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 1;
    ptr_struct->fw_info_psid = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 0;
    ptr_struct->nv_access = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 63;
    ptr_struct->wol_p = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 62;
    ptr_struct->wol_u = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 61;
    ptr_struct->wol_m = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 60;
    ptr_struct->wol_b = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 59;
    ptr_struct->wol_a = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 58;
    ptr_struct->wol_g = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 57;
    ptr_struct->wol_s = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 55;
    ptr_struct->rol_g = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 54;
    ptr_struct->rol_s = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

    offset = 53;
    ptr_struct->fpga = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);

}

void connectx4_icmd_query_cap_general_print(const struct connectx4_icmd_query_cap_general *ptr_struct, FILE* file, int indent_level)
{
    adb2c_add_indentation(file, indent_level);
    fprintf(file, "======== connectx4_icmd_query_cap_general ========\n");
    int i = 0;
    (void)i;
    (void)ptr_struct;
    (void)file;
    (void)indent_level;

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fw_ctrl_update_icmd  : " UH_FMT "\n", ptr_struct->fw_ctrl_update_icmd);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "kdnet_ctrl           : " UH_FMT "\n", ptr_struct->kdnet_ctrl);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "mh_sync              : " UH_FMT "\n", ptr_struct->mh_sync);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "allow_icmd_access_reg_on_all_registers : " UH_FMT "\n", ptr_struct->allow_icmd_access_reg_on_all_registers);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fw_info_psid         : " UH_FMT "\n", ptr_struct->fw_info_psid);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "nv_access            : " UH_FMT "\n", ptr_struct->nv_access);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_p                : " UH_FMT "\n", ptr_struct->wol_p);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_u                : " UH_FMT "\n", ptr_struct->wol_u);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_m                : " UH_FMT "\n", ptr_struct->wol_m);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_b                : " UH_FMT "\n", ptr_struct->wol_b);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_a                : " UH_FMT "\n", ptr_struct->wol_a);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_g                : " UH_FMT "\n", ptr_struct->wol_g);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "wol_s                : " UH_FMT "\n", ptr_struct->wol_s);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "rol_g                : " UH_FMT "\n", ptr_struct->rol_g);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "rol_s                : " UH_FMT "\n", ptr_struct->rol_s);

    adb2c_add_indentation(file, indent_level);
    fprintf(file, "fpga                 : " UH_FMT "\n", ptr_struct->fpga);

}

int connectx4_icmd_query_cap_general_size(void)
{
     return 8;
}

void connectx4_icmd_query_cap_general_dump(const struct connectx4_icmd_query_cap_general *ptr_struct, FILE* file)
{
    connectx4_icmd_query_cap_general_print(ptr_struct, file, 0);
}