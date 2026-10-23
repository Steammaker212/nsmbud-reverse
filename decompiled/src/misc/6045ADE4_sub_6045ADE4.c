/* sub_6045ADE4
 * address: 0x6045ADE4   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045ADE4(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int v5; // r5
  bool v6; // zf
  int v7; // r6
  _DWORD **v8; // r4
  _DWORD *v9; // r7
  int v10; // r0
  _BOOL4 result; // r0
  int v12; // r1

  v5 = a2;
  v6 = a2 == 0;
  if ( !a2 )
    v6 = a4 == 1;
  if ( v6 )
  {
    v5 = FIELD_U8(a1, 81);
    if ( FIELD_U8(a1, 81) )
      v5 = 4;
  }
  v7 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return 0;
  v8 = *(_DWORD ***)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v9 = *v8;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615179376 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v10 = (*(int (__fastcall **)(_DWORD *, int *))*v9)(v9, &dword_60C8C220);
    if ( !v9 || v10 != 1 )
      goto LABEL_16;
    if ( !v5 )
      break;
    --v5;
LABEL_16:
    if ( ++v8 == (_DWORD **)(FIELD_U32(v7, 220) + 4 * FIELD_U32(v7, 212)) )
      return 0;
  }
  if ( (*(int (__fastcall **)(_DWORD *))(*v9 + 20))(v9) != 1 )
    return 0;
  v12 = v9[1];
  if ( a3 != 0xFFFFFFF )
    return (v12 & a3) != 0;
  result = 0;
  if ( (v12 & 0xC0) == 0 )
    return (v12 & a3) != 0;
  return result;
}
