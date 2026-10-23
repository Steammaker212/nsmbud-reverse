/* sub_608D765C
 * address: 0x608D765C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D765C(int a1)
{
  int v2; // r1
  int v3; // r5
  int *v4; // r6
  _BYTE *v5; // r0
  int result; // r0
  int v7; // r1
  bool v8; // zf

  v2 = FIELD_U32(a1, 704);
  if ( v2 )
  {
    v3 = a1 + 9472;
    sub_608C6708((_DWORD *)(a1 + 9472), v2, FIELD_U32(a1, 708));
    v4 = (int *)(a1 + 24);
LABEL_3:
    *v4 = v3;
LABEL_11:
    result = 0;
    FIELD_U32(a1, 4) = v3;
    FIELD_U32(a1, 8) = 0;
    FIELD_U32(a1, 12) = 0;
    FIELD_U16(a1, 16) = 0;
    return result;
  }
  v5 = *(_BYTE **)(a1 + 40);
  if ( v5 )
  {
    if ( v5[4] )
      v3 = (*(int (__fastcall **)(_BYTE *, int, int, _DWORD, _DWORD, _DWORD, const char *))(*(_DWORD *)v5 + 20))(
             v5,
             a1 + 9472,
             512,
             FIELD_U32(a1, 712),
             FIELD_U32(a1, 716),
             FIELD_U32(a1, 44),
             "bxstm");
    else
      v3 = 0;
    FIELD_U32(a1, 24) = v3;
    v4 = (int *)(a1 + 24);
    if ( v3 )
      goto LABEL_11;
  }
  else
  {
    v4 = (int *)(a1 + 24);
    v3 = FIELD_U32(a1, 24);
    if ( v3 )
      goto LABEL_11;
  }
  v3 = a1 + 9472;
  sub_608CF768(a1 + 9472);
  result = (*(int (__fastcall **)(int, int, int))(FIELD_U32(a1, 9472) + 48))(a1 + 9472, a1 + 64, 1);
  if ( result >= 0 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(a1 + 9472) == 1 )
    {
      v7 = FIELD_U32(a1, 712);
      v8 = v7 == 0;
      if ( v7 )
        v8 = FIELD_U32(a1, 716) == 0;
      if ( !v8 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(a1 + 9472);
    }
    goto LABEL_3;
  }
  return result;
}
