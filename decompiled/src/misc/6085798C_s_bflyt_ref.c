/* s_bflyt_ref
 * address: 0x6085798C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall s_bflyt_ref(int a1, int a2, int a3, const char *a4, int a5, int a6)
{
  int v9; // r7
  _DWORD *v10; // r4
  int v11; // r3
  _BYTE v13[104]; // [sp+10h] [bp-68h] BYREF

  nn__util__SNPrintf((nn__util *)v13, (char *)0x48, (unsigned int)"%s.bflyt", a4);
  v9 = (*(int (__fastcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(a1 + 36) + 32))(
         FIELD_U32(a1, 36),
         1651276148,
         v13);
  v10 = (_DWORD *)dword_60CC7F88(56, 4, dword_60CC7F90);
  if ( v10 )
  {
    *v10 = off_60C5A208;
    v10[1] = v10 + 1;
    v10[2] = v10 + 1;
    v10[3] = 0;
    v10[4] = 0;
    v10[7] = 0;
    v10[8] = 0;
    v10[9] = 0;
    v10[10] = v10 + 10;
    v10[11] = v10 + 10;
    v10[12] = 0;
    v10[13] = 0;
    v10[5] = 0;
    v10[6] = 0;
  }
  else
  {
    v10 = 0;
  }
  v11 = FIELD_U32(a1, 52);
  v10[12] = FIELD_U32(a1, 48);
  v10[13] = v11;
  (*(void (__fastcall **)(_DWORD *, int, int, int, _DWORD, int, int))(*v10 + 56))(
    v10,
    a2,
    a3,
    v9,
    FIELD_U32(a1, 36),
    a6,
    a5);
  return v10;
}
