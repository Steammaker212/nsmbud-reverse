/* sub_603E74CC
 * address: 0x603E74CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E74CC(int a1)
{
  int result; // r0
  int v2; // r5
  int i; // r4

  FIELD_U32(a1, 48) = 150;
  result = dword_60CB1BE4;
  v2 = FIELD_U32(dword_60CB1BE4, 36);
  if ( v2 >= 1 )
  {
    result = ((int (*)(void))sub_605E9B64)();
    if ( v2 != 1 )
    {
      for ( i = 1; i != v2; ++i )
        result = sub_605E9B64(dword_60CB1BE4, i);
    }
  }
  return result;
}
