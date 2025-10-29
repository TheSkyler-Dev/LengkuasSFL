Fix type: Documentation improvement

## Summary

    Short description of the documentation changes (files changed, new diagrams, clarified text).

## Files changed

- List top-level doc files changed (for example: docs/GRAMMAR_SPEC.md or GRAMMAR_SPEC.md)

## Embedding images into GRAMMAR_SPEC.md

- Put images under docs/images/ or docs/assets/ and reference them with relative paths: Example: ![Syntax diagram](docs/images/syntax-diagram.svg)
- Prefer SVG for diagrams (crisp rendering). Use PNG if SVG is not possible.
- Commit image files alongside the markdown changes in the same PR.

## Verification steps

How to preview locally:
- Open the markdown file in your editor or use a static site generator if applicable.
- Example preview tools: many editors have built-in Markdown preview; or use mkdocs, Jekyll, etc., if the repo uses one.

Checklist

- Images are added under docs/images or docs/assets with descriptive names
- Images are referenced with relative paths
- I previewed the markdown locally and verified images render
- I updated any related indexes or README links
- I included alt text for images

## Notes for reviewers

- If diagrams were exported from a tool, include source files (e.g., .drawio or original .svg source)
- If grammar changed, list compatibility implications


