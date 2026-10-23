/* sub_6041FB58
 * address: 0x6041FB58   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041FB58(int a1, int a2, _QWORD *a3, char *a4, unsigned int a5, int a6)
{
  int v8; // r9
  __int64 v9; // kr00_8
  void (__fastcall *v10)(int, int, int, _DWORD, _DWORD, _DWORD, int); // r7
  int v11; // r0
  void (__fastcall *v12)(int, int, int, _DWORD, _DWORD, _DWORD, int); // r7
  int v13; // r0
  void (__fastcall *v14)(int, int, int, _DWORD, _DWORD, _DWORD, int); // r7
  int v15; // r0
  int v16; // r7
  void (__fastcall *v17)(int, int, int, _DWORD, _DWORD, _DWORD, int); // r6
  int v18; // r0

  if ( *(_DWORD *)a4 == -1 )
    return 0;
  v8 = FIELD_U32(a2, 192);
  v9 = *a3 + a5;
  if ( (unsigned __int8)*(_DWORD *)a4 != 255 )
  {
    v10 = *(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 28);
    v11 = sub_60916E38(0);
    v10(a1, v8, v11, *a4, v9, HIDWORD(v9), a6);
  }
  if ( (unsigned __int8)a4[1] != 255 )
  {
    v12 = *(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 28);
    v13 = sub_60916E38(1);
    v12(a1, v8, v13, a4[1], v9, HIDWORD(v9), a6);
  }
  if ( (unsigned __int8)a4[2] != 255 )
  {
    v14 = *(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 28);
    v15 = sub_60916E38(2);
    v14(a1, v8, v15, a4[2], v9, HIDWORD(v9), a6);
  }
  v16 = 1;
  if ( (unsigned __int8)a4[3] != 255 )
  {
    v17 = *(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 28);
    v18 = sub_60916E38(3);
    v17(a1, v8, v18, a4[3], v9, HIDWORD(v9), a6);
  }
  return v16;
}
