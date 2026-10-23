/* sub_607F3FAC
 * address: 0x607F3FAC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607F3FAC(int a1)
{
  int v1; // r1
  _DWORD *result; // r0
  int v3; // r1
  unsigned int v4; // r2
  int v5; // r1
  _DWORD *v6; // r0

  v1 = FIELD_U32(a1, 56);
  result = (_DWORD *)dword_60CA83DC;
  switch ( v1 )
  {
    case 5:
      return sub_604B63E0((_DWORD *)(dword_60C99DD0 + 16), 8, FIELD_U32(dword_60CA83DC, 9568));
    case 4:
      return sub_604B63E0((_DWORD *)(dword_60C99DD0 + 16), 9, FIELD_U32(dword_60CA83DC, 9568));
    case 2:
      v3 = FIELD_U32(dword_60C99DD4, 764);
      if ( v3 == 2 )
      {
        return sub_604B63E0((_DWORD *)(dword_60C99DD0 + 16), 18, FIELD_U32(dword_60CA83DC, 9568));
      }
      else
      {
        if ( v3 == 1 )
        {
          v4 = FIELD_U32(dword_60CA83DC, 9568);
          v5 = 16;
          v6 = (_DWORD *)(dword_60C99DD0 + 16);
        }
        else
        {
          v4 = FIELD_U32(dword_60CA83DC, 9568);
          if ( v3 == 4 )
            v5 = 19;
          else
            v5 = 1;
          v6 = (_DWORD *)(dword_60C99DD0 + 16);
        }
        return sub_604B63E0(v6, v5, v4);
      }
  }
  return result;
}
