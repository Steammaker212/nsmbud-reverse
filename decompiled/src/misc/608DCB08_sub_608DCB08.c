/* sub_608DCB08
 * address: 0x608DCB08   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DCB08(int a1, _DWORD *a2, void *a3, char a4, char a5)
{
  char v5; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r5
  int v11; // r7
  int v12; // r7
  void (__fastcall *v13)(int, _DWORD); // r5

  v10 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619905340 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v11 = (int)(v10 + 48);
  if ( !(**v10)(v10, &dword_60CC6AE4) )
    v11 = 192;
  if ( !*(_BYTE *)v11 )
    return 0;
  v12 = operator_new_8DE25C(0x5CCu, a3, 64);
  *(_DWORD *)v12 = off_60C5BCC4;
  FIELD_U32(v12, 4) = 0;
  nn_atk_FsSoundArchive_ctor(v12 + 8);
  *(_DWORD *)v12 = off_60C5BBF0;
  FIELD_U32(v12, 8) = off_60C5BC10;
  FIELD_U32(v12, 1460) = a3;
  FIELD_U32(v12, 1464) = 0;
  FIELD_U32(v12, 1468) = 0;
  FIELD_U32(a1, 544) = v12;
  FIELD_U8(v12, 1472) = a5;
  FIELD_U8(v12, 1480) = a4;
  v13 = *(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v12 + 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v13(v12, a2[1]);
  return sub_608DCC6C(a1, a3);
}
