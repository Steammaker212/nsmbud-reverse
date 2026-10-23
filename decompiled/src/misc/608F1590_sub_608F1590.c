/* sub_608F1590
 * address: 0x608F1590   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1590(int a1, int a2, int a3)
{
  int v3; // s0
  unsigned int v4; // r3
  _DWORD v6[6]; // [sp+10h] [bp-38h] BYREF
  _DWORD v7[8]; // [sp+28h] [bp-20h] BYREF

  memset(v7, 0, 12);
  v7[3] = (int)(float)(FIELD_F32(a1, 20) - FIELD_F32(a1, 12));
  v3 = (int)(float)(FIELD_F32(a1, 24) - FIELD_F32(a1, 16));
  memset(v6, 0, 12);
  v7[4] = v3;
  v7[5] = 1;
  v6[3] = (int)FIELD_F32(a3, 4);
  v6[4] = (int)FIELD_F32(a3, 8);
  v6[5] = 1;
  v4 = FIELD_U32(a3, 20);
  if ( v4 >= 3 )
    v4 = 0;
  return dword_60CC7924(FIELD_U32(a2, 192), FIELD_U32(a1, 28), 0, v7, *(_DWORD *)(a3 + 4 * v4 + 24), 0, v6, 1);
}
