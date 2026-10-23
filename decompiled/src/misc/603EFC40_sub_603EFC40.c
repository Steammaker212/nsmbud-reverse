/* sub_603EFC40
 * address: 0x603EFC40   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603EFC40(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  int v6; // r6
  int v7; // r8
  char v8; // r12
  int v9; // r6
  int v10; // r7
  int v11; // r6

  v5 = dword_60C995D0;
  v6 = FIELD_U32(dword_60C995D0, 32);
  if ( !v6 )
    goto LABEL_27;
  if ( ((unsigned int)dword_60C8DC30 & ~(1614740596 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8DC30) )
  {
    dword_60C8DC2C = (int)&off_60BD94B0;
    _cxa_guard_release(dword_60C8DC30);
  }
  v7 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C8DC2C);
  v9 = FIELD_U32(v5, 32);
  if ( ((unsigned int)&dword_60C8DC28 & ~(1614740704 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC28) )
  {
    dword_60C8DC24 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8DC28);
  }
  if ( v9 )
  {
    v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C8DC24);
    if ( v10 )
      v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v11 = FIELD_U32(v5, 32);
  if ( ((unsigned int)&dword_60C8F06C & ~(1614740836 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
  {
    dword_60C8F068 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8F06C);
  }
  if ( v11 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60C8F068) == 1 )
    FIELD_U8(a1, 34528) = 1;
  if ( v7 || v10 && !sub_603E4B28(v10) )
  {
LABEL_27:
    if ( !FIELD_U8(a1, 34528) )
    {
      sub_604E20C0(a1 + 16, a2);
      sub_604E20C0(a1 + 5768, a2);
      sub_604E20C0(a1 + 11520, a2);
      sub_604E20C0(a1 + 17272, a2);
      sub_604E20C0(a1 + 23024, a2);
      sub_604E20C0(a1 + 28776, a2);
    }
  }
}
