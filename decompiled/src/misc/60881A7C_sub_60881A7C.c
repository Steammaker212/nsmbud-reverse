/* sub_60881A7C
 * address: 0x60881A7C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881A7C(__int64 a1, int a2, int a3)
{
  int v3; // r2
  bool v4; // zf
  int v5; // r2
  bool v6; // zf
  int v7; // r2
  _DWORD *v8; // r12
  _DWORD *v9; // r2
  int v10; // t1
  int v11; // r2
  int v12; // r2

  v3 = (unsigned __int8)*(_BYTE *)HIDWORD(a1);
  if ( *(_BYTE *)HIDWORD(a1) )
  {
    LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 124);
    v4 = (_DWORD)a1 == 0;
    if ( (_DWORD)a1 )
    {
      v3 = *(_DWORD *)(HIDWORD(a1) + 120);
      v4 = v3 == 0;
    }
    if ( !v4 )
    {
      FIELD_U32(a1, 120) = v3;
LABEL_10:
      a1 = *(_QWORD *)(HIDWORD(a1) + 120);
      FIELD_U32(a1, 124) = HIDWORD(a1);
      return a1;
    }
    v7 = *(_DWORD *)(HIDWORD(a1) + 900) + 4 * *(_DWORD *)(HIDWORD(a1) + 32);
    v8 = (_DWORD *)(v7 + 768);
    if ( FIELD_U32(v7, 768) == HIDWORD(a1) )
    {
      *v8 = *(_DWORD *)(HIDWORD(a1) + 120);
      LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 120);
      if ( (_DWORD)a1 )
      {
        FIELD_U32(a1, 124) = *(_DWORD *)(HIDWORD(a1) + 124);
      }
      else
      {
        FIELD_U32(v7, 832) = 0;
        LODWORD(a1) = 0;
      }
    }
    else
    {
      v10 = FIELD_U32(v7, 832);
      v9 = (_DWORD *)(v7 + 832);
      if ( v10 == HIDWORD(a1) )
      {
        *v9 = a1;
        LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 124);
        if ( (_DWORD)a1 )
        {
          FIELD_U32(a1, 120) = *(_DWORD *)(HIDWORD(a1) + 120);
        }
        else
        {
          *v8 = 0;
          LODWORD(a1) = 0;
        }
      }
    }
  }
  else
  {
    v5 = *(_DWORD *)(HIDWORD(a1) + 124);
    v6 = v5 == 0;
    if ( v5 )
    {
      a3 = *(_DWORD *)(HIDWORD(a1) + 120);
      v6 = a3 == 0;
    }
    if ( !v6 )
    {
      FIELD_U32(v5, 120) = a3;
      goto LABEL_10;
    }
    if ( FIELD_U32(a1, 320) == HIDWORD(a1) )
    {
      FIELD_U32(a1, 320) = *(_DWORD *)(HIDWORD(a1) + 120);
      v11 = *(_DWORD *)(HIDWORD(a1) + 120);
      if ( v11 )
      {
        LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 124);
        FIELD_U32(v11, 124) = a1;
      }
      else
      {
        FIELD_U32(a1, 324) = 0;
      }
    }
    else if ( FIELD_U32(a1, 324) == HIDWORD(a1) )
    {
      FIELD_U32(a1, 324) = v5;
      v12 = *(_DWORD *)(HIDWORD(a1) + 124);
      if ( v12 )
      {
        LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 120);
        FIELD_U32(v12, 120) = a1;
      }
      else
      {
        FIELD_U32(a1, 320) = 0;
      }
    }
  }
  return a1;
}
