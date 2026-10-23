/* sub_60517CDC
 * address: 0x60517CDC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60517CDC(int a1, int a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int result; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 36) = a2;
  Pa_Zanki_ref_2();
  v6 = 3;
  sub_604751FC(a1 + 40, a1 + 21672, &dword_60CA88B4, &v6);
  v3 = sub_604746E4(a1 + 40, &dword_60CA8888, &dword_60CA88CC);
  if ( v3 != -1 )
  {
    sub_604742D0((_DWORD *)(a1 + 40), 0, &dword_60CA8888, v3, 1.0, 0);
    if ( sub_6047482C(a1 + 40, 0) )
    {
      v4 = sub_6047482C(a1 + 40, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
    }
  }
  FIELD_U16(a1, 21684) = 257;
  result = (FIELD_U32(dword_60CC6D78, 44) >> 5) & 1;
  FIELD_U8(a1, 3648) = (FIELD_U32(dword_60CC6D78, 44) & 0x20) != 0;
  return result;
}
