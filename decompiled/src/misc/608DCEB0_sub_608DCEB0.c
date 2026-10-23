/* sub_608DCEB0
 * address: 0x608DCEB0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DCEB0(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  int v5; // r0
  void *v6; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619906264 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  if ( !(**v3)(v3, &dword_60CC6AE4) )
    v4 = 192;
  if ( *(_BYTE *)v4 )
  {
    if ( FIELD_U8(a1, 556) )
    {
      sub_608ABEB4(a1);
      FIELD_U8(a1, 556) = 0;
    }
    v5 = FIELD_U32(a1, 544);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    FIELD_U32(a1, 544) = 0;
    v6 = *(void **)(a1 + 548);
    if ( v6 )
    {
      operator_delete_8DE3FC(v6);
      FIELD_U32(a1, 548) = 0;
    }
  }
}
