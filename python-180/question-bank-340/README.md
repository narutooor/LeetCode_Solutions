# LLM Research Scientist — 340-Item Interview & Research Training Bank

Source of truth: [Google Sheets 340-item research training ledger](https://docs.google.com/spreadsheets/d/1P5QgHlY9gdTVKlbOffBZDjmbkkDshsgIQ0KpTcXMAps/edit).

Updated: **2026-10-21**. This is a snapshot of the training **question bank and task inventory**, not proof that these tasks are complete.

| Track | Items | Source file | Main focus |
|---|---:|---|---|
| Coding | 180 | [coding_180.csv](./coding_180.csv) | Python / LeetCode / algorithm interviews |
| Science | 120 | [science_120.csv](./science_120.csv) | Transformer, Post-training, RL, Bayesian UQ, Agents, statistics, LLM evaluation, training systems |
| Research projects | 40 | [projects_40.csv](./projects_40.csv) | Reproducible PyTorch, calibrated reward models, agents, clinical-trial validation, research defense |
| **Total** | **340** | | |

## Research positioning

**LLM Research Scientist** — Post-training, reinforcement learning and reasoning, with differentiated expertise in Bayesian uncertainty quantification and cost-aware decision-making.

The scientific through-line is **Bayesian UQ → calibrated reward modeling → uncertainty-aware Post-training / RL → reliable cost-aware LLM agents**. Clinical trial cost reduction is a motivating evaluation setting, not a substitute for general-purpose LLM evidence.

## Progress and evidence

- Progress, scoring and review dates are maintained in **Google Sheets**, not auto-updated by merely viewing these CSV files.
- Solutions and tests should live under `../solutions/`, `../tests/` and `../reviews/`; see [session evidence template](../SESSION_TEMPLATE.md).
- An actual solution, interpreter output, test log and commit must be verified before a task can be credited.
- At creation, LC1, LC49, LC217 and LC242 had been **practiced**, but none was newly certified mastered here. Historical code has not been fabricated.
- GitHub commit URLs should be written back to corresponding Google Sheets rows.

## Data quality and publication notes

- Hot 100 and NeetCode 150 membership flags in `coding_180.csv` are **existing provisional annotations**. The full official-list overlap and LeetCode IDs are **not independently audited**, and some IDs are blank. Do not claim 100% coverage based on these flags.
- These CSVs capture the current inventory. They do **not** include personal clinical data, patient records, proprietary research results, or unpublished experiments.
- Because this repository is public, never commit PHI, API keys or unpublished collaborator materials.
- To refresh this snapshot, read the live Google Sheets and update each CSV with a new versioned commit; do not silently overwrite progress with an older snapshot.
