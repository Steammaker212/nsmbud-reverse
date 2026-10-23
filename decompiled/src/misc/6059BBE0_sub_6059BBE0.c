/* sub_6059BBE0
 * address: 0x6059BBE0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059BBE0(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r6
  int i; // r7
  int v6; // r0
  int v7; // r4

  if ( ((unsigned int)dword_60CAFA70 & ~(1616493564 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA70) )
  {
    dword_60CAFA7C = 1065353216;
    dword_60CAFA80 = 1065353216;
    dword_60CAFA84 = 1065353216;
    dword_60CAFA88 = 1065353216;
    _cxa_guard_release(dword_60CAFA70);
  }
  if ( ((unsigned int)&dword_60CAFA70[1] & ~(1616493640 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFA70[1]) )
  {
    dword_60CAFA8C = 0;
    dword_60CAFA90 = 0;
    dword_60CAFA94 = 0;
    dword_60CAFA98 = 0;
    _cxa_guard_release(&dword_60CAFA70[1]);
  }
  if ( ((unsigned int)&dword_60CAFA70[2] & ~(1616493724 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFA70[2]) )
  {
    dword_60CAFA9C = 0;
    dword_60CAFAA0 = 0;
    dword_60CAFAA4 = 0;
    dword_60CAFAA8 = 0;
    _cxa_guard_release(&dword_60CAFA70[2]);
  }
  v3 = FIELD_U32(a1, 8);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 120))(v3);
  if ( v4 >= 1 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 132))(v3, i);
      v7 = v6;
      if ( v6 )
      {
        (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 12))(v6, 0, &dword_60CAFA7C);
        (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v7 + 20))(v7, 0, &dword_60CAFA8C);
        (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v7 + 20))(v7, 3, &dword_60CAFA9C);
      }
    }
  }
  return sub_605EB3B0(FIELD_U32(a1, 8), 0);
}
