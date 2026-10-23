/* sub_608BA460
 * address: 0x608BA460   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BA460(int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  int ItemLabel_const; // r5
  int v11; // r1
  _BYTE *v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int result; // r0
  _BYTE v17[36]; // [sp+4h] [bp-24h] BYREF

  if ( FIELD_U32(a1, 116) )
  {
    ItemLabel_const = nn__atk__SoundArchive__GetItemLabel_const(a4, FIELD_U32(a3, 220));
    v11 = 0;
    if ( ItemLabel_const )
    {
      v12 = *(_BYTE **)(a1 + 116);
      if ( v12[4] )
        v11 = (*(int (__fastcall **)(_BYTE *, int, void *, const char *, _DWORD))(*(_DWORD *)v12 + 24))(
                v12,
                ItemLabel_const,
                &unk_60B33D44,
                "bxseq",
                0);
    }
    *(_DWORD *)a2 = v11;
    if ( v11 )
      goto LABEL_15;
  }
  else
  {
    v11 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
      goto LABEL_15;
  }
  v11 = sub_608AC060(a5);
  *(_DWORD *)a2 = v11;
  if ( a7 )
  {
    v13 = *a7;
    if ( *a7 )
    {
      *(_DWORD *)a2 = v13;
      v11 = v13;
    }
    sub_608D6DDC(v17, v11);
    v14 = a7[1];
    if ( v14 )
    {
      if ( !sub_608D6E84(v17, v14, a2 + 4) )
        return 16;
      v15 = sub_608D6E7C(v17);
      FIELD_U32(a2, 4) = sub_608D6D04(v15, FIELD_U32(a2, 4), a2 + 8);
    }
    v11 = *(_DWORD *)a2;
  }
LABEL_15:
  FIELD_U32(a2, 12) = FIELD_U32(a3, 220);
  result = 0;
  FIELD_U32(a2, 16) = v11;
  if ( !v11 )
  {
    if ( FIELD_U8(a2, 88) )
      FIELD_U8(a2, 89) = 1;
    else
      return 6;
  }
  return result;
}
