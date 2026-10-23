/* sub_608BA988
 * address: 0x608BA988   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BA988(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r6
  int v8; // r9
  int v9; // r8
  unsigned __int8 *v10; // r0
  int v11; // r11
  int v12; // r7
  _BYTE *v13; // r0
  bool v14; // zf
  int v15; // r1

  result = nn__atk__SoundArchive__GetItemLabel_const(a4, FIELD_U32(a3, 220));
  v7 = result;
  if ( result )
  {
    v8 = a2 + 84;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(unsigned __int8 **)(a1 + 116);
      v11 = v10[4];
      if ( !v10[4] )
      {
        *(_BYTE *)(FIELD_U32(a4, 8) + 4) = 1;
        *(_BYTE *)(FIELD_U32(a1, 116) + 4) = 1;
        v10 = *(unsigned __int8 **)(a1 + 116);
        if ( !v10[4] )
          break;
      }
      v12 = (*(int (__fastcall **)(unsigned __int8 *, int, void *, const char *, int))(*(_DWORD *)v10 + 24))(
              v10,
              v7,
              &unk_60B33D44,
              "bxbnk",
              v9);
      v13 = *(_BYTE **)(a1 + 116);
      if ( v13[4] )
      {
        result = (*(int (__fastcall **)(_BYTE *, int, void *, const char *, int))(*(_DWORD *)v13 + 24))(
                   v13,
                   v7,
                   &unk_60B33D44,
                   "bxwar",
                   v9);
        if ( !v11 )
          goto LABEL_11;
      }
      else
      {
        result = 0;
        if ( !v11 )
          goto LABEL_11;
      }
LABEL_12:
      v14 = v12 == 0;
      v15 = v8 + 8 * v9;
      if ( v12 )
        v14 = result == 0;
      if ( v14 )
      {
        *(_DWORD *)(v15 - 60) = 0;
        *(_DWORD *)(v15 - 28) = 0;
      }
      else
      {
        *(_DWORD *)(v15 - 60) = v12;
        *(_DWORD *)(v15 - 28) = result;
        *(_BYTE *)(v8 + v9) = 0;
      }
      if ( ++v9 == 4 )
        return result;
    }
    result = 0;
    v12 = 0;
LABEL_11:
    *(_BYTE *)(FIELD_U32(a4, 8) + 4) = 0;
    *(_BYTE *)(FIELD_U32(a1, 116) + 4) = 0;
    goto LABEL_12;
  }
  return result;
}
