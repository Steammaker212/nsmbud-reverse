/* sub_60090990
 * address: 0x60090990   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60090990(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r5

  v3 = (_DWORD *)(a1 + 15240);
  v2 = FIELD_U32(a1, 15240);
  if ( v2 <= 3 )
  {
    sub_603F01A0(dword_60C99D6C, v2, 27, 0);
    sub_603F01A0(dword_60C99D6C, *v3, 30, 0);
    FIELD_U32(a1, 15252) = 2;
    *v3 = -1;
  }
  if ( FIELD_U8(a1, 15260) )
  {
    sub_6040810C(dword_60C9A1E8);
    FIELD_U8(a1, 15260) = 0;
  }
  return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82320);
}
