/* sub_609AD124
 * address: 0x609AD124   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AD124(int a1)
{
  int result; // r0
  int i; // r7
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 576) )
  {
    result = (int)off_60C5CB34;
    if ( !*off_60C5CB34 )
      return (int)sub_60941B04(v4);
  }
  else
  {
    result = FIELD_U32(a1, 572);
    if ( result >= 1 )
    {
      for ( i = 0; i < result; ++i )
      {
        if ( *off_60C5CB34 )
        {
          v4[0] = &sead__SafeStringBase__vtable;
          v4[1] = off_60C5CB34;
        }
        else
        {
          sub_60941B04(v4);
          result = FIELD_U32(a1, 572);
        }
      }
    }
  }
  return result;
}
