/* sub_603AC464
 * address: 0x603AC464   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AC464(int a1)
{
  int result; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6304));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  result = FIELD_U32(a1, 6680);
  if ( !result )
  {
    if ( !FIELD_U8(PlayerMgr_instance, 156) )
    {
      if ( FIELD_U32(a1, 6656) )
      {
        if ( !((int (__fastcall *)(int))loc_603AE1DC)(a1) )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B4C);
LABEL_7:
        sub_603AD914(a1, 1);
        sub_603ADA8C(a1, 0);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B6C);
      }
      if ( ((int (__fastcall *)(int))loc_603AE00C)(a1) )
        goto LABEL_7;
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B4C);
  }
  return result;
}
