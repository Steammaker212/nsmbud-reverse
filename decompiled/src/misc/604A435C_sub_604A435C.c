/* sub_604A435C
 * address: 0x604A435C   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A435C(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r5
  const char *v7; // r7
  int result; // r0
  int v11; // [sp+Ch] [bp-7Ch] BYREF
  int v12; // [sp+10h] [bp-78h] BYREF
  const char *v13; // [sp+14h] [bp-74h]
  int v14; // [sp+18h] [bp-70h]
  int v15; // [sp+1Ch] [bp-6Ch] BYREF

  v6 = (_DWORD *)(a1 + 48);
  sub_604734E4((_DWORD *)(a1 + 48), 0);
  sub_60475C8C((int)v6);
  v13 = (const char *)&v15;
  v12 = (int)&BufferedSafeStringBase_char_vtable_probably;
  v14 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v12);
  *v13 = 0;
  v12 = (int)&off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA13D4 + 12))(&dword_60CA13D4);
  v7 = (const char *)dword_60CA13D8;
  (*(void (__fastcall **)(int *))(dword_60CA13DC + 12))(&dword_60CA13DC);
  sub_608FDDF4((int)&v12, "%s.%s", v7, (const char *)dword_60CA13E0);
  message_ref(v6, &v12, a1 + 3976, 0, 0);
  v11 = 24;
  sub_60476030((int)v6, &dword_60CA1270, &v11);
  v12 = 1;
  sub_60475484((int)v6, a1 + 20448, &dword_60CA13E4, &v12);
  v12 = 5;
  sub_604751FC((int)v6, a1 + 20452, &dword_60CA1408, &v12);
  v12 = 1;
  sub_604752D4((int)v6, a1 + 20472, &dword_60CA13EC, &v12);
  v12 = 1;
  sub_604753A8((int)v6, a1 + 20476, &dword_60CA13F4, &v12);
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = "Pa_KeyAssignA_00";
  sub_6050A4EC(a1 + 6016, v6, &v12, 0, 0);
  FIELD_U32(a1, 6056) = 1;
  FIELD_U32(a1, 6052) |= 1u;
  v12 = (int)&sead__SafeStringBase__vtable;
  v13 = "Pa_KeyAssignB_00";
  sub_6050A4EC(a1 + 13232, v6, &v12, 0, 0);
  FIELD_U32(a1, 13272) = 2;
  FIELD_U32(a1, 13268) |= 1u;
  sub_60502210(a1 + 3936, &unk_60B02CF4, 17);
  sub_6050292C(a1 + 3936, 15);
  sub_60502960(a1 + 3936, 15);
  sub_60502994(a1 + 3936, 15);
  sub_605029C8(a1 + 3936, 15);
  sub_605029FC(a1 + 3936, &unk_60B02CF8, "SE_SYS_CURSOR");
  sub_605028F0(a1 + 3936, &unk_60B02CF8, 1);
  sub_605029FC(a1 + 3936, &unk_60B02CFC, "SE_SYS_CURSOR");
  sub_605028F0(a1 + 3936, &unk_60B02CFC, 1);
  FIELD_U8(a1, 4990) = 1;
  FIELD_U32(a1, 20484) = a3;
  FIELD_U32(a1, 20488) = a4;
  FIELD_U32(a1, 20528) = a2;
  result = sub_608DE334(0x20u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 1;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    FIELD_U32(a1, 20532) = 1;
    FIELD_U32(a1, 20536) = result;
  }
  return result;
}
