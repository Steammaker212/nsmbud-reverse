/* sub_604275C8
 * address: 0x604275C8   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604275C8(int a1, int a2)
{
  char v2; // r12
  int *v5; // r0
  int v6; // r9
  bool v7; // zf
  _DWORD v8[32]; // [sp+10h] [bp-80h] BYREF

  v5 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 3u )
    v5 += 3;
  v6 = *v5;
  if ( ((unsigned int)&dword_60C8C21C & ~(1614968328 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C21C) )
  {
    dword_60C8C218 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C21C);
  }
  if ( v6 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C8C218) == 1 )
  {
    v7 = FIELD_U8(a1, 17944) == 0;
    if ( FIELD_U8(a1, 17944) )
      v7 = FIELD_U32(a1, 17948) == 0;
    if ( !v7 )
    {
      if ( FIELD_U32(a1, 17952) )
      {
        v8[1] = 1065353216;
        memset(&v8[2], 0, 16);
        v8[6] = 1065353216;
        memset(&v8[7], 0, 16);
        v8[11] = 1065353216;
        memset(&v8[12], 0, 12);
        v8[0] = off_60C5D014;
        v8[15] = 1092616192;
        memset(&v8[16], 0, 16);
        v8[20] = 1065353216;
        v8[21] = 0;
        sub_60442878(v6, v8);
        sub_604277E0(a1, a2, 2, FIELD_U8(a1, 17944), v8, FIELD_U32(a1, 17952));
        nullsub_111(v8);
      }
    }
  }
}
