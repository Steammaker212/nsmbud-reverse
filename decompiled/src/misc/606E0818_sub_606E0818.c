/* sub_606E0818
 * address: 0x606E0818   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E0818(int a1)
{
  int v2; // r0
  int v3; // r3
  __int64 v4; // r0
  int v5; // r3
  __int64 v6; // r0
  _DWORD *v7; // r0
  int (__fastcall *v8)(int, int *); // r2
  int *v9; // r1
  int *v10; // r5
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
  v2 = FIELD_U8(a1, 539);
  if ( FIELD_U32(a1, 6936) )
  {
    if ( !FIELD_U8(a1, 539) )
      goto LABEL_13;
    v3 = v2 - 33;
    HIDWORD(v4) = 1u >> (33 - v2);
    LODWORD(v4) = 1 << (v2 - 1);
    if ( v3 >= 0 )
    {
      HIDWORD(v4) = 1 << v3;
      LODWORD(v4) = 0;
    }
    if ( (*(_QWORD *)(EventMgr__instance + 16) & v4) != 0 )
      goto LABEL_13;
  }
  else
  {
    if ( !FIELD_U8(a1, 539) )
      goto LABEL_13;
    v5 = v2 - 33;
    HIDWORD(v6) = 1u >> (33 - v2);
    LODWORD(v6) = 1 << (v2 - 1);
    if ( v5 >= 0 )
    {
      HIDWORD(v6) = 1 << v5;
      LODWORD(v6) = 0;
    }
    if ( (*(_QWORD *)(EventMgr__instance + 16) & v6) == 0 )
      goto LABEL_13;
  }
  if ( FIELD_U8(a1, 6917) )
  {
    v7 = **(_DWORD ***)(FIELD_U32(a1, 6104) + 12);
    v7[5] = v7[2];
    v7[7] |= 2u;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
    v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v9 = &dword_60CBBDF4;
    return v8(a1, v9);
  }
LABEL_13:
  v10 = (int *)(a1 + 6908);
  result = FIELD_U8(a1, 6944);
  if ( FIELD_U32(a1, 6908) )
  {
    if ( FIELD_U8(a1, 6944) )
    {
      FIELD_U8(a1, 6918) = FIELD_U8(a1, 6958);
      v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      v9 = &dword_60CBBD94;
      return v8(a1, v9);
    }
  }
  else if ( !FIELD_U8(a1, 6944)
         || (FIELD_U8(a1, 6918) = FIELD_U8(a1, 6958),
             (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBD74),
             (result = *v10) == 0) )
  {
    result = FIELD_U32(a1, 6932);
    if ( result )
      JUMPOUT(0x6000100C);
  }
  return result;
}
