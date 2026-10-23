/* sub_60639EF8
 * address: 0x60639EF8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60639EF8(int a1)
{
  int v1; // r5
  _WORD *v3; // r6
  unsigned int result; // r0
  _BYTE *v5; // r4
  unsigned int *i; // r7
  bool v7; // zf
  unsigned int v8; // r10
  int v9; // r0

  FIELD_U16(a1, 7020) = 0;
  v3 = (_WORD *)(a1 + 7020);
  result = 7024;
  FIELD_U8(a1, 7024) = 0;
  v5 = (_BYTE *)(a1 + 7024);
  for ( i = *((unsigned int **)v5 - 50); i; i = (unsigned int *)i[1] )
  {
    result = *i;
    v7 = *i == 0;
    if ( *i )
    {
      v1 = FIELD_U32(result, 2196);
      v7 = v1 == 0;
    }
    if ( v7 )
      continue;
    result = FIELD_U8(v1, 533);
    if ( result == 2 )
    {
      result = FIELD_S8(v1, 84);
      if ( result > 3 || (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << result)) == 0 )
        continue;
      v9 = 1 << result;
    }
    else
    {
      if ( result != 1 )
        continue;
      v8 = FIELD_S8(v1, 84);
      if ( v8 > 3 )
        continue;
      result = FIELD_U16(PlayerMgr_instance, 66) & (1 << v8);
      if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v8)) == 0 )
        continue;
      result = sub_607B7028(v1);
      if ( result )
        continue;
      v9 = 1 << v8;
    }
    *v3 |= v9;
    result = FIELD_U8(v1, 6900);
    if ( (result & 2) != 0 )
      *v5 = 1;
  }
  return result;
}
