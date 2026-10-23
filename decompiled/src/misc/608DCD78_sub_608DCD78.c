/* sub_608DCD78
 * address: 0x608DCD78   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DCD78(int a1, int a2, void *a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r7
  _DWORD *v9; // r7

  v7 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619905960 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v8 = (int)(v7 + 48);
  if ( !(**v7)(v7, &dword_60CC6AE4) )
    v8 = 192;
  if ( !*(_BYTE *)v8 )
    return 0;
  v9 = (_DWORD *)operator_new_8DE25C(0x2DCu, a3, 64);
  *v9 = off_60C5BCC4;
  v9[1] = 1;
  nn_atk_MemorySoundArchive_ctor(v9 + 2);
  *v9 = off_60C5BC3C;
  v9[2] = off_60C5BC5C;
  FIELD_U32(a1, 544) = v9;
  (*(void (__fastcall **)(_DWORD *, int))(*v9 + 16))(v9, a2);
  return sub_608DCC6C(a1, (int)a3);
}
