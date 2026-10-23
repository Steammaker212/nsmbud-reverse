/* sub_60418078
 * address: 0x60418078   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418078(int a1, int a2, int a3)
{
  int (__fastcall ***v4)(_DWORD, int, float *, int *, float *); // r0
  float v5; // s0
  float v6; // s4
  float v7; // s2
  float v8; // s6
  float v9; // s6
  int v11; // [sp+4h] [bp-24h] BYREF
  float v12[2]; // [sp+8h] [bp-20h] BYREF
  float v13[6]; // [sp+10h] [bp-18h] BYREF

  v4 = (int (__fastcall ***)(_DWORD, int, float *, int *, float *))(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1);
  v5 = *((float *)DrawMgr_instance + 4);
  v6 = *((float *)DrawMgr_instance + 6);
  v7 = *((float *)DrawMgr_instance + 5);
  v8 = *((float *)DrawMgr_instance + 7);
  v11 = 0;
  v9 = 1.0 / (float)(v8 - v7);
  v13[0] = 1.0 / (float)(v6 - v5);
  v13[1] = -v9;
  v12[0] = -(float)(v5 * v13[0]);
  v12[1] = -(float)(v9 * v7);
  return (**v4)(v4, a3, v13, &v11, v12);
}
