/* Resource_getModel
 * address: 0x604300DC   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Resource_getModel(
        void *this,
        sead__SafeString *identifier,
        int unk1,
        signed int unk2,
        signed int unk3,
        signed int unk4,
        signed int unk5,
        signed int unk6,
        int unk7,
        void *heap)
{
  int heap_; // r7
  int v14; // r10
  int v15; // r6
  int v16; // r8
  int unk7_; // r6
  int v18; // r1
  char *cstr; // r4
  size_t v20; // r7
  signed int a5; // r4
  int v22; // r0
  int v23; // r3
  int *v24; // r9
  int v25; // r2
  int v26; // r6
  int v27; // r5
  unsigned __int16 *v28; // r0
  int v29; // r6
  size_t v30; // r10
  size_t v31; // r2
  int v32; // r0
  int v33; // r1
  bool v34; // zf
  int v35; // r0
  int v37; // [sp+1Ch] [bp-2Ch]

  heap_ = (int)heap;
  v14 = operator_new_8DE25C(0x2E8u, heap, 4);
  sub_60431E20(v14);
  v15 = *((_DWORD *)this + 5);
  (*((void (__fastcall **)(sead__SafeString *))identifier->vtable + 3))(identifier);
  v16 = FIELD_U32(v15, 48);
  unk7_ = unk7;
  v18 = -1;
  if ( !v16 )
  {
    a5 = unk2;
    goto LABEL_27;
  }
  cstr = identifier->cstr;
  v37 = unk1;
  if ( cstr )
    v20 = strlen(cstr);
  else
    v20 = 0;
  v22 = FIELD_U16(v16, 12);
  v24 = (int *)(v16 + 8 + 16 * v22);
  v23 = *v24;
  if ( FIELD_U32(v16, 8) < *v24 )
  {
    v25 = v16 + 8;
    do
    {
      v26 = 0;
      if ( v20 > v23 >> 3 )
        v26 = ((unsigned __int8)cstr[v20 + ~(v23 >> 3)] >> (v23 & 7)) & 1;
      v27 = *(_DWORD *)(v25 + 16 * v22);
      v22 = *(unsigned __int16 *)(v25 + 16 * v22 + 2 * v26 + 4);
      v24 = (int *)(v25 + 16 * v22);
      v23 = *v24;
    }
    while ( v27 < *v24 );
  }
  v28 = (unsigned __int16 *)v24[2];
  v29 = v14;
  v30 = *v28;
  v31 = v30;
  if ( v20 < v30 )
    v31 = v20;
  if ( !v31 )
  {
    unk1 = v37;
    a5 = unk2;
    if ( v20 < v30 )
    {
      v14 = v29;
      heap_ = (int)heap;
      unk7_ = unk7;
      v18 = -1;
      goto LABEL_27;
    }
    goto LABEL_21;
  }
  v32 = memcmp(v28 + 1, cstr, v31);
  v33 = v32;
  if ( !v32 )
    v33 = 1;
  if ( v20 < v30 )
  {
    unk1 = v37;
    a5 = unk2;
    goto LABEL_25;
  }
  unk1 = v37;
  a5 = unk2;
  if ( !v32 )
  {
LABEL_21:
    v33 = 0;
    if ( v30 < v20 )
      v33 = -1;
  }
LABEL_25:
  v34 = v33 == 0;
  v14 = v29;
  heap_ = (int)heap;
  unk7_ = unk7;
  v18 = -1;
  if ( v34 )
    v18 = ((int)v24 - v16 - 24) >> 4;
LABEL_27:
  v35 = sub_6043AF90(this, v18);
  sub_60432054(v14, v35, *((_DWORD *)this + 7), unk1, a5, unk3, unk4, unk5, unk6, unk7_, heap_);
  return v14;
}
