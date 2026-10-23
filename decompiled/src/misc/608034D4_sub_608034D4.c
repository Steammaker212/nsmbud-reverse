/* sub_608034D4
 * address: 0x608034D4   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608034D4(int a1, int a2, int a3, char a4, __int64 a5)
{
  int v8; // r0
  int v9; // r6
  unsigned int result; // r0
  unsigned int v11; // r1
  int v12; // r5
  int v13; // r0

  if ( !a5 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
    ++FIELD_U32(a1, 40);
  FIELD_F32(a1, 36) = ((float (__fastcall *)(int))loc_608023A8)(a2);
  if ( a3 < 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = a3 + 1;
    v9 = 1;
    FIELD_U32(a1, 48) = v8;
    FIELD_U8(a1, 30) = a4;
  }
  result = FIELD_U8(a1, 32);
  if ( FIELD_U8(a1, 32) )
    goto LABEL_20;
  result = FIELD_U32(a1, 40);
  if ( result > 0x59 )
    goto LABEL_20;
  v11 = FIELD_U32(a1, 48) - 10;
  if ( v11 < 0xE && ((0x3FBFu >> v11) & 1) != 0 )
    goto LABEL_20;
  if ( (FIELD_U8(a1, 29) & 1) != 0
    || result >= 0x3C && (result = FIELD_U8(a1, 31), FIELD_U8(a1, 31))
    || (result = sub_607FCA74(dword_60CC6484)) != 0
    || (result = FIELD_U32(dword_60C99DD4, 764) - 3, result < 2)
    || (result = FIELD_U8(dword_60CC6D78, 109032), FIELD_U8(dword_60CC6D78, 109032))
    || (result = sub_608024DC(), result != 1)
    || (result = FIELD_U32(AreaTask_intance, 1828), result == 1) )
  {
LABEL_20:
    if ( a5 )
    {
      if ( v9 )
        return result;
      v12 = a1 + 52;
      goto LABEL_26;
    }
    v13 = FIELD_U32(a1, 44);
    if ( v13 >= 1 )
      FIELD_U32(a1, 44) = v13 - 1;
    v12 = a1 + 52;
    result = ((int (__fastcall *)(_DWORD, int))loc_60803F50)(FIELD_U32(a1, 52), a1 + 48);
    if ( !v9 )
    {
LABEL_26:
      result = *(_DWORD *)(*(_DWORD *)v12 + 16);
      if ( !result )
      {
        result = 0;
        FIELD_U32(a1, 48) = 0;
        FIELD_U8(a1, 30) = 0;
      }
    }
  }
  else
  {
    FIELD_U32(a1, 48) = 24;
    result = 0;
    FIELD_U8(a1, 30) = 0;
    if ( !a5 )
      JUMPOUT(0x60803F50);
  }
  return result;
}
