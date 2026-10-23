/* sub_600CEF58
 * address: 0x600CEF58   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600CEF58(int a1, int a2, float a3)
{
  int v3; // r12
  float v4; // r3
  int v5; // r1
  int v6; // [sp+0h] [bp-18h] BYREF
  float v7; // [sp+4h] [bp-14h]
  int v8; // [sp+8h] [bp-10h]

  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(a1, 116);
  v7 = v4;
  v6 = v3;
  if ( (unsigned __int8)a2 >= 4u )
    a2 = 0;
  v7 = v4 + a3;
  v5 = *(_DWORD *)(PlayerMgr_instance + 4 * a2 + 48);
  if ( v5 )
    sub_60025B84(a1, v5, (int)&v6, 6u);
  else
    sub_600228F4(dword_60C7F52C, (int)&v6, 6);
}
