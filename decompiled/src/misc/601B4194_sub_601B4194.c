/* sub_601B4194
 * address: 0x601B4194   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B4194(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r1
  int result; // r0

  v2 = a1 + 1032;
  v3 = sub_601DA2F0(a1 + 1032);
  v5 = v3 == 1;
  if ( v3 == 1 )
    v5 = FIELD_U32(a1, 1092) == 5;
  if ( v5 )
  {
    FIELD_U32(a1, 1120) |= 0x200u;
    sub_6022D628(dword_60C8D864);
    return sub_601D462C(a1, 1);
  }
  else
  {
    if ( sub_601DA2B8(v2, v4) == 1 && sub_601DA4F4(a1 + 1056) == 1 )
    {
      sub_601D0A30(a1, 0);
      return sub_601D1C5C(a1, 0);
    }
    result = sub_601DA4BC(v2, v6);
    if ( result != 1 )
      return result;
    if ( sub_601DA4F4(a1 + 1056) == 1 )
    {
      FIELD_U32(a1, 1120) &= ~0x200u;
      return sub_601D1C5C(a1, 0);
    }
    result = FIELD_U32(a1, 1092);
    if ( result == 4 )
    {
      FIELD_U32(a1, 1120) |= 0x10400u;
      return sub_601D8284(a1);
    }
  }
  return result;
}
