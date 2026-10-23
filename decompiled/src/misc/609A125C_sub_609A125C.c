/* sub_609A125C
 * address: 0x609A125C   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609A125C(int a1, int a2, void *a3, int a4)
{
  unsigned int result; // r0
  int v9; // r7
  int v10; // r10
  int v11; // r7
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  unsigned __int8 v15; // [sp+Ah] [bp-8DEh] BYREF
  unsigned __int8 v16; // [sp+Bh] [bp-8DDh] BYREF
  int (**v17)(); // [sp+Ch] [bp-8DCh] BYREF
  int *v18; // [sp+10h] [bp-8D8h]
  int v19; // [sp+14h] [bp-8D4h]
  int v20; // [sp+18h] [bp-8D0h] BYREF
  int (**v21)(); // [sp+98h] [bp-850h] BYREF
  int *v22; // [sp+9Ch] [bp-84Ch]
  int v23; // [sp+A0h] [bp-848h]
  int v24; // [sp+A4h] [bp-844h] BYREF
  int (**v25)(); // [sp+ACh] [bp-83Ch] BYREF
  int *v26; // [sp+B0h] [bp-838h]
  int v27; // [sp+B4h] [bp-834h]
  int v28; // [sp+B8h] [bp-830h] BYREF
  int (**v29)(); // [sp+4B8h] [bp-430h] BYREF
  int *v30; // [sp+4BCh] [bp-42Ch]
  int v31; // [sp+4C0h] [bp-428h]
  int v32; // [sp+4C4h] [bp-424h] BYREF

  if ( FIELD_U32(a1, 4) )
  {
    sub_609A523C();
    FIELD_U32(a1, 4) = 0;
  }
  sub_609052D4(a2, 0);
  sub_60905318(a2);
  if ( a4 == 1 )
  {
    v22 = &v24;
    v21 = &BufferedSafeStringBase_char_vtable_probably;
    v23 = 8;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v21);
    *(_BYTE *)v22 = 0;
    v21 = &off_60BD4B8C;
    v18 = &v20;
    v17 = &BufferedSafeStringBase_char_vtable_probably;
    v19 = 128;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
    *(_BYTE *)v18 = 0;
    v16 = 0;
    v15 = 0;
    v17 = &off_60BD95A8;
    result = sub_6090552C(a2, (int)&v15, 1);
    if ( result )
    {
      sub_6099F1E8((sead_ListNode *)a1, (int)a3);
      sub_6099F9D0((sead_ListNode *)a1, v15, (int)a3);
      if ( v15 )
      {
        v9 = 0;
        while ( 1 )
        {
          result = sub_6090552C(a2, (int)&v16, 1);
          if ( !result )
            break;
          ((void (__fastcall *)(int (***)()))v21[3])(&v21);
          result = sub_6090552C(a2, (int)v22, v16);
          if ( result < v16 )
            break;
          if ( v23 <= v16 )
            ((void (__fastcall *)(int (***)()))v21[3])(&v21);
          else
            *((_BYTE *)v22 + v16) = 0;
          result = sub_6090552C(a2, (int)&v16, 1);
          if ( !result )
            break;
          ((void (__fastcall *)(int (***)()))v17[3])(&v17);
          result = sub_6090552C(a2, (int)v18, v16);
          if ( result < v16 )
            break;
          if ( v19 <= v16 )
            ((void (__fastcall *)(int (***)()))v17[3])(&v17);
          else
            *((_BYTE *)v18 + v16) = 0;
          sub_6099F5D4((sead_ListNode *)a1, &v21, &v17);
          if ( (unsigned __int8)++v9 >= (unsigned int)v15 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v10 = operator_new_8DE25C(0x8Cu, a3, 4);
        sub_609A59D0(v10);
        v30 = &v32;
        v29 = &BufferedSafeStringBase_char_vtable_probably;
        v31 = 1024;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
        *(_BYTE *)v30 = 0;
        v26 = &v28;
        v25 = &BufferedSafeStringBase_char_vtable_probably;
        v29 = &off_60BFA9DC;
        v27 = 1024;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
        *(_BYTE *)v26 = 0;
        v25 = &off_60BFA9DC;
        result = sub_609A4FC4(v10, a2, a3, &v29, &v25);
        FIELD_U32(a1, 4) = v10;
      }
    }
  }
  else
  {
    FIELD_U32(a1, 8) = operator_new_8DE2C8(FIELD_U32(a1, 20), (int)a3, -4);
    FIELD_U32(a1, 12) = operator_new_8DE2C8(FIELD_U32(a1, 20), (int)a3, -4);
    FIELD_U32(a1, 16) = operator_new_8DE2C8(FIELD_U32(a1, 20), (int)a3, -4);
    sub_6099F1E8((sead_ListNode *)a1, (int)a3);
    v11 = sub_609A1624(a1, a2, a3);
    if ( v11 >= 0 )
    {
      sub_60905318(a2);
      sub_609052FC(a2, v11);
      FIELD_U32(a1, 4) = sub_609A1EFC(a1, a2, a3);
    }
    v12 = *(void **)(a1 + 8);
    if ( v12 )
      operator_delete(v12);
    FIELD_U32(a1, 8) = 0;
    v13 = *(void **)(a1 + 12);
    if ( v13 )
      operator_delete(v13);
    FIELD_U32(a1, 12) = 0;
    v14 = *(void **)(a1 + 16);
    if ( v14 )
      operator_delete(v14);
    FIELD_U32(a1, 16) = 0;
    return 0;
  }
  return result;
}
