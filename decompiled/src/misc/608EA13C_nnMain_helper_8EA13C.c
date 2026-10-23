/* nnMain_helper_8EA13C
 * address: 0x608EA13C   size: 2532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (**__fastcall nnMain_helper_8EA13C(int a1, void *a2, _DWORD *a3))()
{
  nv *v6; // r0
  unsigned int v7; // r2
  nn__vi *v8; // r0
  int v9; // r1
  void *v10; // r5
  nn__mem__StandardAllocator *v11; // r6
  Display **v12; // r1
  float v13; // s2
  float v14; // s0
  int (__fastcall *v15)(int, int *); // r7
  int (**result)(); // r0
  int (__fastcall *v17)(int, const char *); // r6
  bool v18; // zf
  int v19; // r5
  int v20; // r9
  char v21; // r0
  _BOOL4 v22; // r5
  char v23; // r0
  int v24; // r0
  int (**v25)(); // r1
  int (**v26)(); // r1
  int (**v27)(); // r1
  int v28; // r5
  int v29; // r0
  int v30; // r0
  float *v31; // r0
  float v32; // s0
  unsigned int v33; // r0
  char v34; // r12
  int v35; // r6
  int v36; // r0
  unsigned int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r6
  _DWORD *v41; // r5
  int v42; // r0
  int v43; // r3
  void *v44; // [sp+0h] [bp-A0h]
  void *v45; // [sp+0h] [bp-A0h]
  int v46; // [sp+24h] [bp-7Ch] BYREF
  unsigned int v47; // [sp+28h] [bp-78h] BYREF
  int (**v48)(); // [sp+2Ch] [bp-74h] BYREF
  int v49; // [sp+30h] [bp-70h] BYREF
  const char *v50; // [sp+34h] [bp-6Ch]
  char v51; // [sp+38h] [bp-68h]
  char v52; // [sp+39h] [bp-67h]

  nv__SetGraphicsAllocator(
    (nv *)sub_608EABF8,
    (void *(__cdecl *)(unsigned int, unsigned int, void *))j_free,
    (void (__cdecl *)(void *, void *))j_realloc,
    0,
    v44);
  v6 = (nv *)(*(int (__fastcall **)(void *, _DWORD, int))(*(_DWORD *)a2 + 24))(a2, FIELD_U32(a1, 124), 4096);
  v8 = (nn__vi *)nv__InitializeGraphics(v6, *(void **)(a1 + 124), v7);
  v9 = FIELD_U32(a1, 128);
  if ( v9 )
  {
    v10 = (void *)(*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a2 + 24))(a2, v9, 8);
    v11 = (nn__mem__StandardAllocator *)operator_new_8DE25C(0x24u, a2, 4);
    nn__mem__StandardAllocator__ctor_9AE744(v11, v10, FIELD_U32(a1, 128));
    FIELD_U32(a1, 256) = v11;
    v8 = (nn__vi *)nv__SetGraphicsDevtoolsAllocator(
                     (nv *)sub_608EAC10,
                     (void *(__cdecl *)(unsigned int, unsigned int, void *))sub_608EAC24,
                     (void (__cdecl *)(void *, void *))sub_608EAC34,
                     (void *(__cdecl *)(void *, unsigned int, void *))v11,
                     v45);
  }
  nn__vi__Initialize(v8);
  nn__vi__OpenDefaultDisplay((nn__vi *)(a1 + 276), v12);
  nn__vi__CreateLayer(a1 + 280, FIELD_U32(a1, 276));
  nn__vi__SetLayerScalingMode(FIELD_U32(a1, 280), 2);
  nn__vi__GetDisplayVsyncEvent(a1 + 312, FIELD_U32(a1, 276));
  FIELD_U32(a1, 184) = *a3;
  FIELD_U32(a1, 188) = a3[1];
  v13 = (float)FIELD_U32(a1, 104);
  v14 = (float)FIELD_U32(a1, 100);
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_F32(a1, 200) = v14;
  FIELD_F32(a1, 204) = v13;
  v15 = (int (__fastcall *)(int, int *))nvnBootstrapLoader("nvnDeviceInitialize");
  result = (int (**)())nvnBootstrapLoader("nvnDeviceGetProcAddress");
  v17 = (int (__fastcall *)(int, const char *))result;
  v18 = v15 == 0;
  if ( v15 )
    v18 = result == 0;
  if ( !v18 )
  {
    v19 = 0;
    Nvn_resolveDeviceFunctions(0, (int (__fastcall *)(int, const char *))result);
    dword_60CC72A4(&v49);
    if ( FIELD_U8(a1, 110) )
      v19 = sub_608F29EC(FIELD_U32(a1, 144));
    dword_60CC72A8(&v49, v19);
    v20 = operator_new_8DE25C(0x3000u, a2, 8);
    result = (int (**)())v15(v20, &v49);
    if ( result )
    {
      Nvn_resolveDeviceFunctions(v20, v17);
      dword_60CC72BC(v20, 0, &v49);
      dword_60CC72BC(v20, 1, &v48);
      result = (int (**)())v49;
      if ( v49 == 53 )
      {
        result = v48;
        if ( (int)v48 >= 105 )
        {
          if ( FIELD_U8(a1, 110) || FIELD_U8(a1, 111) )
          {
            dword_60CC72D4(v20, sub_608F294C, 0, 1);
            v21 = FIELD_U8(a1, 111);
            v22 = FIELD_U8(a1, 110) == 0;
          }
          else
          {
            v21 = 0;
            v22 = 1;
          }
          v49 = v20;
          v50 = *(const char **)(a1 + 148);
          v51 = v21;
          v23 = 1;
          if ( v22 )
            v23 = FIELD_U8(a1, 111);
          v52 = v23;
          v24 = operator_new_8DE25C(0x170u, a2, 4);
          dword_60CCF464 = sub_608F2530(v24, &v49);
          sub_6090B2B4();
          dword_60CC7330(&v49);
          dword_60CC7334(&v49, 1);
          dword_60CC732C(&v49, FIELD_U32(dword_60CCF464, 24));
          v48 = *(int (***)())(a1 + 132);
          v25 = v48;
          if ( v48 == (int (**)())-1 )
          {
            dword_60CC72BC(v20, 85, &v48);
            v25 = v48;
          }
          dword_60CC733C(&v49, v25);
          v48 = *(int (***)())(a1 + 136);
          v26 = v48;
          if ( v48 == (int (**)())-1 )
          {
            dword_60CC72BC(v20, 82, &v48);
            v26 = v48;
          }
          dword_60CC7338(&v49, v26);
          v48 = *(int (***)())(a1 + 140);
          v27 = v48;
          if ( v48 == (int (**)())-1 )
          {
            dword_60CC72BC(v20, 92, &v48);
            v27 = v48;
          }
          dword_60CC7340(&v49, v27);
          v28 = dword_60CC7344(&v49);
          v29 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a2 + 24))(a2, v28, 4096);
          dword_60CC7348(&v49, v29, v28);
          FIELD_U32(a1, 268) = operator_new_8DE25C(0x2000u, a2, 8);
          dword_60CC7350();
          sub_608F290C(dword_60CCF464, FIELD_U32(a1, 268));
          v30 = operator_new_8DE25C(0x3Cu, a2, 4);
          FIELD_U32(a1, 216) = sub_608F1AA4(v30);
          nn__vi__GetNativeWindow((int)&v49, FIELD_U32(a1, 280));
          *(_DWORD *)(FIELD_U32(a1, 216) + 36) = v49;
          sub_608F1B80(FIELD_U32(a1, 216), FIELD_U8(a1, 80));
          sub_608F1BA4(FIELD_U32(a1, 216), FIELD_U8(a1, 109));
          v31 = *(float **)(a1 + 216);
          v32 = (float)FIELD_U32(a1, 104);
          v31[1] = (float)FIELD_U32(a1, 100);
          v31[2] = v32;
          (*(void (__fastcall **)(float *, void *))(*(_DWORD *)v31 + 8))(v31, a2);
          v33 = FIELD_U32(a1, 80);
          if ( v33 )
            FIELD_U64(a1, 208) = (__int64)(float)((float)((float)((float)v33 + 0.02) / 60.0) * (float)qword_60CCFB50);
          sub_608F291C(dword_60CCF464, FIELD_U32(a1, 216));
          if ( ((unsigned int)&dword_60CCEBE8 & ~(1619961488 << v34) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBE8) )
          {
            dword_60CCEBE4 = (FIELD_U32(a1, 112) + 4127) & 0xFFFFF000;
            _cxa_guard_release(&dword_60CCEBE8);
          }
          v35 = FIELD_U32(dword_60CCF464, 24);
          FIELD_U32(a1, 236) = operator_new_8DE25C(0xA0u, a2, 8);
          dword_60CC77B4();
          FIELD_U32(a1, 228) = operator_new_8DE25C(0x100u, a2, 8);
          dword_60CC73C4(&v49);
          dword_60CC73C0(&v49, v35);
          dword_60CC73CC(&v49, 18);
          v36 = operator_new_8DE2C8(dword_60CCEBE4, (int)a2, 4096);
          dword_60CC73C8(&v49, v36, dword_60CCEBE4);
          dword_60CC73DC(FIELD_U32(a1, 228), &v49);
          v48 = 0;
          dword_60CC72BC(v35, 20, &v48);
          FIELD_U32(a1, 232) = (*(int (__fastcall **)(void *, _DWORD, int (**)()))(*(_DWORD *)a2 + 24))(
                                    a2,
                                    FIELD_U32(a1, 116),
                                    v48);
          dword_60CC77C0(FIELD_U32(a1, 236), nullsub_5634);
          dword_60CC77C4(FIELD_U32(a1, 236), FIELD_U32(a1, 236));
          sub_608F2914(dword_60CCF464, FIELD_U32(a1, 236));
          dword_60CC72BC(v20, 25, &v48);
          dword_60CC72BC(v20, 26, &v47);
          dword_60CC72BC(v20, 24, &v46);
          v37 = v47 + ((unsigned int)v48 + v46 * FIELD_U32(a1, 120) - 1) / (unsigned int)v48 * (_DWORD)v48 - 1;
          FIELD_U32(a1, 252) = (4095 - v37 % v47 + v37) & 0xFFFFF000;
          FIELD_U32(a1, 248) = operator_new_8DE25C(0x100u, a2, 8);
          dword_60CC73C4(&v49);
          dword_60CC73C0(&v49, FIELD_U32(dword_60CCF464, 24));
          dword_60CC73CC(&v49, 33);
          v38 = operator_new_8DE2C8(FIELD_U32(a1, 252), (int)a2, 4096);
          dword_60CC73C8(&v49, v38, FIELD_U32(a1, 252));
          dword_60CC73DC(FIELD_U32(a1, 248), &v49);
          dword_60CC7444(&v49, FIELD_U32(dword_60CCF464, 24));
          dword_60CC7448(&v49);
          dword_60CC744C(&v49, FIELD_U32(a1, 228), FIELD_U32(a1, 112), 32);
          FIELD_U32(a1, 240) = operator_new_8DE25C(0x30u, a2, 8);
          dword_60CC745C();
          FIELD_U32(a1, 244) = dword_60CC7468(FIELD_U32(a1, 240));
          v39 = operator_new_8DE25C(0x40u, a2, 8);
          FIELD_U32(a1, 288) = v39;
          dword_60CC79E0(v39, v20);
          if ( FIELD_U8(a1, 108) )
            FIELD_U32(a1, 176) = sub_608F1654(a2, a3, FIELD_U32(a1, 100), FIELD_U32(a1, 104));
          v40 = operator_new_8DE25C(0x94u, a2, 4);
          v49 = (int)&sead__SafeStringBase__vtable;
          v50 = "Presentation Thread";
          v41 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
          v41[1] = a1;
          v41[2] = sub_608EAC4C;
          v41[3] = 0;
          *v41 = off_60C5C380;
          v42 = sead__ThreadUtil__ConvertPrioritySeadToPlatform(FIELD_U32(a1, 152));
          v43 = 0x2000;
          if ( FIELD_U8(a1, 111) )
            v43 = 0x4000;
          sub_6090891C(v40, &v49, v41, a2, v42, 0, 0x7FFFFFFF, v43, 32);
          FIELD_U32(a1, 284) = v40;
          v49 = 2;
          sub_60908478(v40, &v49);
          return (*(int (**(__fastcall **)(_DWORD))())(**(_DWORD **)(a1 + 284) + 24))(FIELD_U32(a1, 284));
        }
      }
    }
  }
  return result;
}
