/* sub_600D2768
 * address: 0x600D2768   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D2768(int a1)
{
  int v2; // r0
  int v3; // r0
  _BYTE *v4; // r5
  int v5; // r0
  int v6; // r0
  _BYTE *v7; // r6
  int v8; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 20) & 3;
  if ( v2 == 3 )
    LOBYTE(v2) = 0;
  FIELD_U8(a1, 6122) = v2;
  v3 = sub_60778454(dword_60CBFA90, 0);
  FIELD_U32(a1, 6192) = v3;
  v4 = (_BYTE *)(a1 + 6132);
  if ( v3 >= 0 )
    ++*v4;
  v5 = sub_60778454(dword_60CBFA90, 1);
  FIELD_U32(a1, 6196) = v5;
  if ( v5 >= 0 )
    ++*v4;
  v6 = sub_60778454(dword_60CBFA90, 2);
  v7 = (_BYTE *)(a1 + 6122);
  FIELD_U32(a1, 6200) = v6;
  if ( v6 >= 0 )
    ++*v4;
  v8 = sub_60778454(dword_60CBFA90, 3);
  FIELD_U32(a1, 6204) = v8;
  if ( v8 >= 0 )
    ++*v4;
  result = (unsigned __int8)*v7;
  if ( *v7 )
  {
    if ( result == 1 )
    {
      result = FIELD_U32(AreaTask_intance, 1824);
      FIELD_U32(a1, 6148) = FIELD_U32(AreaTask_intance, 1812);
      FIELD_U32(a1, 6152) = result;
      FIELD_U8(a1, 6139) = 1;
      FIELD_U32(dword_60CC6484, 268) = result;
    }
  }
  else
  {
    result = dword_60CBFA90;
    FIELD_U32(dword_60CBFA90, 452) |= 1u;
  }
  return result;
}
