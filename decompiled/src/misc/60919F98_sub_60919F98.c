/* sub_60919F98
 * address: 0x60919F98   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60919F98(int a1, int a2)
{
  int v3; // r5
  unsigned int v4; // r6
  char v5; // r7
  signed int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r3

  v3 = *(_DWORD *)(a1 + 4 * a2 + 28);
  v4 = FIELD_U16(v3, 24);
  v5 = FIELD_U8(v3, 278);
  v6 = sub_609200A0(v3);
  v7 = FIELD_U16(v3, 26);
  v8 = 1;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  if ( (int)(v4 >> v5) > 1 )
    v8 = v4 >> v5;
  if ( v6 <= (int)(v7 >> v5) )
    v6 = v7 >> v5;
  FIELD_F32(a1, 20) = (float)v8;
  FIELD_F32(a1, 24) = (float)(unsigned int)v6;
  FIELD_F32(a1, 4) = (float)v8;
  FIELD_F32(a1, 8) = (float)(unsigned int)v6;
  return (float)v8;
}
