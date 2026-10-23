/* sub_608BAFBC
 * address: 0x608BAFBC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BAFBC(int a1)
{
  int v2; // r5
  int i; // r5

  *(_DWORD *)a1 = off_60C5B184;
  ((void (__fastcall *)(int))loc_608BB3C8)(a1);
  v2 = FIELD_U32(a1, 380);
  if ( v2 )
  {
    do
    {
      if ( FIELD_U8(v2, 177) )
        sub_608C7BA4(v2);
      v2 = FIELD_U32(v2, 368);
    }
    while ( v2 );
    for ( i = FIELD_U32(a1, 380); i; i = FIELD_U32(i, 368) )
      sub_608C7E5C(i);
  }
  FIELD_U32(a1, 380) = 0;
  FIELD_U8(a1, 5) = 0;
  return a1;
}
