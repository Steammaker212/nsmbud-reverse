/* sub_6075C86C
 * address: 0x6075C86C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6075C86C(int a1, int a2)
{
  char v2; // r12
  int v3; // r7
  _WORD *v4; // r6
  int i; // r8
  int v6; // r4
  int v7; // r0
  int v8; // r5

  v3 = a1 + 240;
  v4 = (_WORD *)(a1 + 304);
  for ( i = 0; i != 6; ++i )
  {
    if ( (*v4 & (unsigned __int16)(1 << i)) != 0 )
    {
      v6 = **(_DWORD **)(v3 + 4 * i);
      if ( ((unsigned int)&dword_60C80400 & ~(1618331892 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
      {
        dword_60C803FC = (int)&off_60BC3228;
        _cxa_guard_release(&dword_60C80400);
      }
      if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C803FC) == 1 )
        FIELD_U32(v6, 312) = a2;
    }
  }
  if ( a2 )
  {
    v7 = FIELD_U32(a1, 564);
    if ( v7 )
      FIELD_U32(v7, 312) = a2;
  }
  v8 = **(_DWORD **)(a1 + 1176);
  if ( ((unsigned int)&dword_60C80400 & ~(1618332040 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v8 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C803FC) == 1 )
      FIELD_U32(v8, 312) = a2;
  }
}
