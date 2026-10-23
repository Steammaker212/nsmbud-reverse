/* sub_608D38CC
 * address: 0x608D38CC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D38CC(int result)
{
  unsigned __int8 *v1; // r4
  bool v2; // zf
  int *v3; // r0

  v2 = *(_BYTE *)(result - 128) == 0;
  if ( *(_BYTE *)(result - 128) )
  {
    v1 = (unsigned __int8 *)(result - 164);
    result = *(unsigned __int8 *)(result - 127);
    v2 = result == 0;
  }
  if ( !v2 )
  {
    result = v1[38];
    if ( !v1[38] )
    {
      result = sub_608D348C((int)v1);
      if ( result == 1 )
      {
        v1[39] = 1;
        if ( v1[1518] )
        {
          v3 = sub_608C3C60();
          sub_608C411C((int)v3, (int)(v1 + 164));
          v1[1518] = 0;
        }
        result = v1[37];
        if ( v1[37] )
        {
          v1[37] = 0;
          return 0;
        }
      }
    }
  }
  return result;
}
