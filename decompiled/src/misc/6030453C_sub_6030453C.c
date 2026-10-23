/* sub_6030453C
 * address: 0x6030453C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6030453C(int a1)
{
  int v2; // r5
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v6; // r4

  v2 = sub_60466974(dword_60C9D3E4, a1 + 108);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613776236 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B418 & ~(1613776352 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B414) == 1 )
    {
      FIELD_U32(v2, 6788) = FIELD_U32(a1, 8);
      FIELD_U8(v2, 6792) = 1;
      FIELD_U32(a1, 6988) = FIELD_U32(v2, 8);
      FIELD_U8(a1, 7032) = 1;
      v6 = FIELD_U32(a1, 56);
      if ( ((unsigned int)&dword_60C92F04 & ~(1613776508 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
      {
        dword_60C92F00 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C92F04);
      }
      if ( v6 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C92F00) == 1 )
          FIELD_U8(v6, 6604) = 0;
      }
    }
  }
}
