/* sub_60916BA8
 * address: 0x60916BA8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916BA8(int a1, int a2, int a3)
{
  int v5; // r6
  unsigned int v6; // r1
  unsigned int *v7; // r2
  unsigned int v8; // r1
  int result; // r0
  bool v10; // zf
  int v11; // r6
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r1
  _DWORD v16[10]; // [sp+8h] [bp-28h] BYREF

  v5 = FIELD_U32(a1, 216);
  v6 = FIELD_U32(a3, 256) - FIELD_U16(a1, 220);
  if ( FIELD_U32(a1, 212) > v6 )
    v5 += 12 * v6;
  v7 = (unsigned int *)(v5 + 8);
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 & 0xFFFFFFFE, v7) );
  result = FIELD_U8(a1, 42);
  if ( (result & 8) != 0 )
  {
    v10 = (v8 & 1) == 0;
    if ( (v8 & 1) != 0 )
    {
      result = FIELD_U8(a3, 50) & 2;
      v10 = result == 0;
    }
    if ( !v10 )
    {
      v11 = 6;
      if ( FIELD_U16(a3, 34) != 8 )
      {
        v12 = sub_609200B8(a3);
        v11 = FIELD_U16(a3, 28);
        if ( v12 > v11 )
          v11 = v12;
      }
      memset(v16, 0, 12);
      v13 = FIELD_U16(a3, 24);
      if ( v13 <= 1 )
        v13 = 1;
      v16[3] = v13;
      v14 = sub_609200A0(a3);
      v15 = FIELD_U16(a3, 26);
      if ( v14 > v15 )
        v15 = v14;
      v16[4] = v15;
      v16[5] = v11;
      return dword_60CC7930(FIELD_U32(a2, 192), a3 + 64, 0, v16, &unk_60CCFC90, 15);
    }
  }
  return result;
}
