/* sub_607F0608
 * address: 0x607F0608   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F0608(int a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r0

  v3 = dword_60CC62E4;
  switch ( *a2 )
  {
    case 0:
      if ( AreaTask_intance )
        FIELD_U8(AreaTask_intance, 193) = 0;
      if ( !FIELD_U8(a1, 64540) )
        sub_605612A0();
      break;
    case 1:
      FIELD_U32(dword_60CC62E4, 128) = 1;
      FIELD_U32(v3, 108) = 0;
      if ( dword_60C8996C )
      {
        v4 = sub_601918EC(dword_60C8996C);
        FIELD_U8(v4, 308) |= 1u;
      }
      break;
    case 2:
      sub_605610BC(a1 + 568, FIELD_U32(dword_60CC62E4, 108));
      sub_608EC968(a1, 1000, FIELD_U32(dword_60CC62E4, 128), 1000);
      break;
    case 3:
      if ( dword_60C8996C )
      {
        v5 = sub_601918EC(dword_60C8996C);
        FIELD_U8(v5, 308) |= 2u;
      }
      FIELD_U8(v3, 112) = 1;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60C9BB38 + 20))(dword_60C9BB38, 1);
      break;
    default:
      return;
  }
}
