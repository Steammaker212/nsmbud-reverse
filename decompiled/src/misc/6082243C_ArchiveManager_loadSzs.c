/* ArchiveManager_loadSzs
 * address: 0x6082243C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ArchiveManager_loadSzs(
        int a1,
        sead__SafeString *identifier,
        sead__SafeString *path,
        void *a4,
        int a5)
{
  _DWORD *v8; // r6
  char *cstr; // r8
  char *v10; // r1
  signed int result; // r0
  char *v12; // r2
  int v13; // r3
  int v14; // r5
  _DWORD *v15; // r0
  int (__fastcall ***Szs_helper)(_DWORD, int *); // r0
  int (__fastcall ***v17)(_DWORD, int *); // r7
  sead_IDisposer *v18; // r11
  char *containingHeap; // r9
  char *v20; // r8
  char *v21; // r0
  signed int v22; // r7
  bool v23; // cc
  signed int v24; // r0
  int v25; // [sp+0h] [bp-30h]
  sead_IDisposer *v27; // [sp+8h] [bp-28h] BYREF

  if ( dword_60CC6C20 && sub_6081AAA4(dword_60CC6C20) == 1 )
    a4 = (void *)sub_6081AA84(dword_60CC6C20);
  v8 = *(_DWORD **)(a1 + 20);
  v25 = a1 + 20;
  if ( v8 )
  {
    while ( 2 )
    {
      (*((void (__fastcall **)(sead__SafeString *))identifier->vtable + 3))(identifier);
      (*((void (__fastcall **)(sead__SafeString *))identifier->vtable + 3))(identifier);
      cstr = identifier->cstr;
      (*(void (__fastcall **)(_DWORD *))(v8[4] + 12))(v8 + 4);
      v10 = (char *)v8[5];
      result = 1;
      if ( cstr == v10 )
        return result;
      v12 = identifier->cstr;
      v13 = 0;
      while ( 1 )
      {
        v14 = (unsigned __int8)v12[v13];
        if ( v14 != (unsigned __int8)v10[v13] )
          break;
        if ( v12[v13] )
        {
          if ( ++v13 < 0x80000 )
            continue;
        }
        if ( v8 )
          return result;
        goto LABEL_16;
      }
      v15 = v8 + 2;
      if ( v14 - (unsigned __int8)v10[v13] < 0 )
        v15 = v8 + 1;
      v8 = (_DWORD *)*v15;
      if ( *v15 )
        continue;
      break;
    }
  }
LABEL_16:
  if ( a5 == 1 )
    Szs_helper = ArchiveManager_loadSzs_helper(path, (int)a4, FIELD_U32(a1, 17448));
  else
    Szs_helper = sub_608211F8((int)path, (int)a4);
  v17 = Szs_helper;
  if ( !Szs_helper )
    return 0;
  v18 = (sead_IDisposer *)operator_new_8DE25C(0x40u, a4, 4);
  sead_IDisposer_ctor(v18);
  FIELD_U32(v18, 0x0) = (int)off_60C2A5C0;
  FIELD_U32(v18 + (1) * 16, 0x4) = (int)&FIELD_U32(v18 + (1) * 16, 0xC);
  FIELD_U32(v18 + (1) * 16, 0x0) = (int)&BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v18 + (1) * 16, 0x8) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v18[1]);
  *(_BYTE *)FIELD_U32(v18 + (1) * 16, 0x4) = 0;
  FIELD_U32(v18 + (1) * 16, 0x0) = (int)&off_60BD4C20;
  FIELD_U32(v18 + (3) * 16, 0xC) = (int)v17;
  containingHeap = (char *)FIELD_U32(v18 + (1) * 16, 0x4);
  (*((void (__fastcall **)(sead__SafeString *))identifier->vtable + 3))(identifier);
  v20 = identifier->cstr;
  if ( containingHeap != v20 )
  {
    (*((void (__fastcall **)(sead__SafeString *))identifier->vtable + 3))(identifier);
    v21 = identifier->cstr;
    v22 = 0;
    while ( v21[v22] )
    {
      if ( !v21[v22 + 1] )
      {
        ++v22;
        break;
      }
      if ( !v21[v22 + 2] )
      {
        v22 += 2;
        break;
      }
      v23 = v22 + 2 < 0x80000;
      v22 += 3;
      if ( !v23 )
      {
        v22 = 0;
        break;
      }
    }
    v24 = FIELD_U32(v18 + (1) * 16, 0x8);
    if ( v22 >= v24 )
      v22 = v24 - 1;
    qmemcpy(containingHeap, v20, v22);
    containingHeap[v22] = 0;
  }
  v27 = v18;
  sub_6082189C(v25, identifier, &v27);
  return 1;
}
