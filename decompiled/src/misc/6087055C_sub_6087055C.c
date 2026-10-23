/* sub_6087055C
 * address: 0x6087055C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087055C(int result, int a2, unsigned __int16 *a3, float a4)
{
  int v4; // r10
  int v8; // r7
  int v9; // r11
  unsigned __int16 *v10; // r5
  bool v11; // zf
  int v12; // r1
  int v13; // [sp+4h] [bp-3Ch] BYREF

  v4 = result;
  v8 = FIELD_U16(result, 52);
  if ( FIELD_U16(result, 52) )
  {
    v9 = 0;
    v10 = (unsigned __int16 *)(FIELD_U32(result, 16) + 8);
    do
    {
      result = *a3;
      v11 = result == 0xFFFF;
      if ( result != 0xFFFF )
      {
        result = *v10;
        v11 = result == 0xFFFF;
      }
      if ( !v11 )
      {
        v12 = FIELD_U32(v4, 24);
        v13 = 2139095040;
        result = ((int (__fastcall *)(int, int *, float))loc_6086E97C)(v12 + 48 * result, &v13, a4);
        *(_DWORD *)(a2 + 4 * v9++) = result;
      }
      --v8;
      ++a3;
      v10 += 8;
    }
    while ( v8 );
  }
  return result;
}
