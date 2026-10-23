/* sub_603E6BF8
 * address: 0x603E6BF8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E6BF8(int a1)
{
  int v2; // r5
  int result; // r0

  sub_603FBB34(dword_60C99DD4);
  v2 = FIELD_U32(a1, 36);
  if ( v2 == 2 )
    return sub_6077A260(dword_60CBFA90);
  result = sub_6077A268(dword_60CBFA90);
  if ( v2 == 1 )
    return sub_6077A420(dword_60CBFA90, FIELD_U32(a1, 32));
  return result;
}
