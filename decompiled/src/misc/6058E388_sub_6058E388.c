/* sub_6058E388
 * address: 0x6058E388   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058E388(int a1, float a2, float a3)
{
  unsigned int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r1
  int v9; // r2

  v4 = FIELD_U32(a1, 20);
  v5 = v4 >> 28;
  FIELD_U32(a1, 6120) = v4 >> 28;
  if ( v4 >> 28 )
  {
    v6 = HIBYTE(v4) & 0xF;
    if ( v6 == 15 )
      v6 = -1;
    FIELD_U32(a1, 6116) = v6;
  }
  else
  {
    v7 = 2;
    if ( sub_60716838(
           TileMgr_instance,
           (unsigned int)FIELD_F32(a1, 108),
           (unsigned int)(float)-FIELD_F32(a1, 112),
           FIELD_U8(a1, 86),
           COERCE_FLOAT((unsigned int)FIELD_F32(a1, 108)),
           a3,
           COERCE_FLOAT((unsigned int)(float)-FIELD_F32(a1, 112))) )
    {
      return v7;
    }
    v5 = FIELD_U32(a1, 6120);
  }
  v8 = FIELD_U32(a1, 24);
  v7 = 1;
  v9 = BYTE1(v8);
  if ( v5 < 2 )
    v9 = (unsigned __int8)__ROR4__(v8, 8) + 1;
  FIELD_U32(a1, 6108) = v9;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF524);
  return v7;
}
