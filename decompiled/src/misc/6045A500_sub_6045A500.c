/* sub_6045A500
 * address: 0x6045A500   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045A500(int a1)
{
  char v1; // r12
  int v2; // r6
  _DWORD **v3; // r5
  int v4; // r7
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // r5
  int v9; // r0

  v2 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
  {
LABEL_11:
    v7 = 0;
    FIELD_U8(a1, 81) = 0;
    return v7;
  }
  v3 = *(_DWORD ***)(dword_60CCF448 + 220);
  v4 = 4;
  while ( 1 )
  {
    v5 = *v3;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615177076 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v6 = (*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C8C220);
    if ( !v5 || v6 != 1 )
      goto LABEL_10;
    if ( !v4 )
      break;
    --v4;
LABEL_10:
    if ( ++v3 == (_DWORD **)(FIELD_U32(v2, 220) + 4 * FIELD_U32(v2, 212)) )
      goto LABEL_11;
  }
  v7 = 0;
  FIELD_U8(a1, 81) = 0;
  if ( (*(int (__fastcall **)(_DWORD *))(*v5 + 20))(v5) == 1 )
  {
    v9 = v5[1];
    if ( (v9 & 0xFF000C0) == 0 && (v9 & 0xFFFFFFF) != 0 )
    {
      v7 = 1;
      FIELD_U8(a1, 81) = 1;
    }
  }
  return v7;
}
