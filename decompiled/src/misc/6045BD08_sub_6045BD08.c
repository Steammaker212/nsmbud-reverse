/* sub_6045BD08
 * address: 0x6045BD08   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045BD08(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5
  int v5; // r1
  _BOOL4 result; // r0
  int v7; // r6
  _DWORD **v8; // r4
  _DWORD *v9; // r7
  int v10; // r0

  v4 = a2;
  if ( a2 == 4 )
  {
    if ( !FIELD_U8(a1, 81) )
      return 0;
  }
  else if ( !a2 )
  {
    v5 = FIELD_U8(a1, 81);
    result = 0;
    if ( v5 )
      return result;
  }
  v7 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return 0;
  v8 = *(_DWORD ***)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v9 = *v8;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615183276 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v10 = (*(int (__fastcall **)(_DWORD *, int *))*v9)(v9, &dword_60C8C220);
    if ( !v9 || v10 != 1 )
      goto LABEL_15;
    if ( !v4 )
      break;
    --v4;
LABEL_15:
    if ( ++v8 == (_DWORD **)(FIELD_U32(v7, 220) + 4 * FIELD_U32(v7, 212)) )
      return 0;
  }
  if ( (*(int (__fastcall **)(_DWORD *))(*v9 + 20))(v9) == 1 && (v9[68] & a3) == a3 )
    return (v9[1] & a3) != 0;
  return 0;
}
