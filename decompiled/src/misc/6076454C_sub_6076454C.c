/* sub_6076454C
 * address: 0x6076454C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076454C(int a1, int a2)
{
  int v2; // r6
  int result; // r0
  int v6; // r7
  char v7; // r12
  bool v8; // zf

  result = a1 + 1328;
  if ( (*(_DWORD *)(result + 4 * (*((int *)&unk_60B0A910 + a2) >> 5) + 2224)
      & (1 << (*((_DWORD *)&unk_60B0A910 + a2) & 0x1F))) != 0 )
  {
    v6 = a2 | 1;
    if ( (a2 | 1) == 1 )
    {
      v2 = 1;
      *(_DWORD *)(a1 + 4 * (dword_60B0A918[a2] >> 5) + 6900) |= 1 << (dword_60B0A918[a2] & 0x1F);
    }
    result = sub_6014B758(result, a2);
    v8 = result == 0;
    if ( result )
    {
      v2 = FIELD_U32(result, 144);
      v8 = v2 == 0;
    }
    if ( !v8 )
    {
      if ( ((unsigned int)&dword_60C8F394 & ~(1618363876 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F394) )
      {
        dword_60C8F390 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C8F394);
      }
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8F390) == 1
        && (FIELD_U8(v2, 6124) & 4) != 0
        && v6 == 1 )
      {
        *(_DWORD *)(a1 + 4 * (dword_60B0A920[a2] >> 5) + 6900) |= 1 << (dword_60B0A920[a2] & 0x1F);
      }
      result = Actor__getProfileId((Actor *)v2);
      if ( result == 309 )
      {
        result = FIELD_U32(a1, 6900) | 0x8000;
        FIELD_U32(a1, 6900) = result;
      }
    }
  }
  return result;
}
