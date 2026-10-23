/* sub_60789F84
 * address: 0x60789F84   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789F84(int a1, unsigned int a2)
{
  int v3; // r2
  unsigned int v4; // r3
  int result; // r0
  int v6; // r3
  int v7; // r1
  bool v8; // zf

  v3 = dword_60C99DD4 + 272;
  v4 = 0;
  if ( !dword_60C99DD4 )
    v3 = dword_60C99DEC + 16;
  result = 0;
  if ( a2 < 6 )
    v4 = a2;
  v6 = v3 + 72 * v4;
  if ( FIELD_U8(v6, 20) )
  {
    if ( FIELD_S32(v6, 24) >= 1 )
    {
      result = 1;
      if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << a2)) == 0 )
      {
        result = 0;
        if ( a2 >= 4 )
          a2 = 0;
        v7 = *(_DWORD *)(a1 + 4 * a2 + 32);
        v8 = v7 == 0;
        if ( v7 )
          v8 = (FIELD_U8(v7, 1219) & 8) == 0;
        if ( v8 )
          return 1;
      }
    }
  }
  return result;
}
