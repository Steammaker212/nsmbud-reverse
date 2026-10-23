/* FileName_s_Mode_s_Id_s_Filter_s_ref
 * address: 0x609683D8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FileName_s_Mode_s_Id_s_Filter_s_ref(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  char *v8; // r0
  _DWORD *v9; // r3
  int v10; // r9
  int v11; // r8
  int v12; // r5
  int v13; // r6
  int v14; // r7
  _DWORD v16[267]; // [sp+14h] [bp-42Ch] BYREF

  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  v8 = (char *)a4[1];
  v9 = a5;
  if ( v8 != &byte_60ABC94D )
  {
    if ( *v8 )
      v9 = a4;
    else
      v9 = a5;
  }
  v10 = v9[1];
  (*(void (__fastcall **)(_DWORD *))(*a6 + 12))(a6);
  v11 = a6[1];
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v12 = a3[1];
  (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  v13 = a5[1];
  (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  v14 = a5[1];
  (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  sub_604209A4(v16, aFilenameSModeS, v11, v12, v10, v13, v14, a5[1]);
  return 0;
}
